/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura and Sebastian Ullrich
-/
prelude
import Init.Data.Option.BasicAux
import Init.Data.String.Basic
import Init.Data.Array.Basic
import Init.Data.UInt
import Init.Data.Hashable
import Init.Control.Reader
import Init.Control.EState
import Init.Control.StateRef
import Init.Control.Option

namespace Lean
/-
Basic Lean types used to implement builtin commands and extensions.
Note that this file is part of the Lean `Init` library instead of
`Lean` actual implementation.
The idea is to allow users to implement simple parsers, macros and tactics
without importing the whole `Lean` module.
It also allow us to use extensions to develop the `Init` library.
-/

/- Valid identifier names -/
def isGreek (c : Char) : Bool :=
  0x391 ≤ c.val && c.val ≤ 0x3dd

def isLetterLike (c : Char) : Bool :=
  (0x3b1  ≤ c.val && c.val ≤ 0x3c9 && c.val ≠ 0x3bb) ||                  -- Lower greek, but lambda
  (0x391  ≤ c.val && c.val ≤ 0x3A9 && c.val ≠ 0x3A0 && c.val ≠ 0x3A3) || -- Upper greek, but Pi and Sigma
  (0x3ca  ≤ c.val && c.val ≤ 0x3fb) ||                                   -- Coptic letters
  (0x1f00 ≤ c.val && c.val ≤ 0x1ffe) ||                                  -- Polytonic Greek Extended Character Set
  (0x2100 ≤ c.val && c.val ≤ 0x214f) ||                                  -- Letter like block
  (0x1d49c ≤ c.val && c.val ≤ 0x1d59f)                                   -- Latin letters, Script, Double-struck, Fractur

def isSubScriptAlnum (c : Char) : Bool :=
  (0x2080 ≤ c.val && c.val ≤ 0x2089) || -- numeric subscripts
  (0x2090 ≤ c.val && c.val ≤ 0x209c) ||
  (0x1d62 ≤ c.val && c.val ≤ 0x1d6a)

def isIdFirst (c : Char) : Bool :=
  c.isAlpha || c = '_' || isLetterLike c

def isIdRest (c : Char) : Bool :=
  c.isAlphanum || c = '_' || c = '\'' || c == '!' || c == '?' || isLetterLike c || isSubScriptAlnum c

def idBeginEscape := '«'
def idEndEscape   := '»'
def isIdBeginEscape (c : Char) : Bool := c = idBeginEscape
def isIdEndEscape (c : Char) : Bool := c = idEndEscape

namespace Name

def toStringWithSep (sep : String) : Name → String
  | anonymous         => "[anonymous]"
  | str anonymous s _ => s
  | num anonymous v _ => toString v
  | str n s _         => toStringWithSep sep n ++ sep ++ s
  | num n v _         => toStringWithSep sep n ++ sep ++ repr v

protected def toString : Name → String :=
toStringWithSep "."

instance : ToString Name := ⟨Name.toString⟩

def capitalize : Name → Name
  | Name.str p s _ => Name.mkStr p s.capitalize
  | n              => n

def appendAfter : Name → String → Name
  | str p s _, suffix => Name.mkStr p (s ++ suffix)
  | n,         suffix => Name.mkStr n suffix

def appendIndexAfter : Name → Nat → Name
  | str p s _, idx => Name.mkStr p (s ++ "_" ++ toString idx)
  | n,         idx => Name.mkStr n ("_" ++ toString idx)

def appendBefore : Name → String → Name
  | anonymous, pre => Name.mkStr anonymous pre
  | str p s _, pre => Name.mkStr p (pre ++ s)
  | num p n _, pre => Name.mkNum (Name.mkStr p pre) n

end Name

structure NameGenerator :=
  (namePrefix : Name := `_uniq)
  (idx        : Nat  := 1)

namespace NameGenerator

instance : Inhabited NameGenerator := ⟨{}⟩

@[inline] def curr (g : NameGenerator) : Name :=
  Name.mkNum g.namePrefix g.idx

@[inline] def next (g : NameGenerator) : NameGenerator :=
  { g with idx := g.idx + 1 }

@[inline] def mkChild (g : NameGenerator) : NameGenerator × NameGenerator :=
  ({ namePrefix := Name.mkNum g.namePrefix g.idx, idx := 1 },
   { g with idx := g.idx + 1 })

end NameGenerator

class MonadNameGenerator (m : Type → Type) :=
  (getNGen : m NameGenerator)
  (setNGen : NameGenerator → m Unit)

export MonadNameGenerator (getNGen setNGen)

def mkFreshId {m : Type → Type} [Monad m] [MonadNameGenerator m] : m Name := do
  let ngen ← getNGen
  let r := ngen.curr
  setNGen ngen.next
  pure r

instance monadNameGeneratorLift (m n : Type → Type) [MonadNameGenerator m] [MonadLift m n] : MonadNameGenerator n := {
  getNGen := liftM (getNGen : m _),
  setNGen := fun ngen => liftM (setNGen ngen : m _)
}

namespace Syntax

/-- Retrieve the left-most leaf's info in the Syntax tree. -/
partial def getHeadInfo : Syntax → Option SourceInfo
  | atom info _      => info
  | ident info _ _ _ => info
  | node _ args      => args.findSome? getHeadInfo
  | _                => none

partial def getTailInfo : Syntax → Option SourceInfo
  | atom info _   => info
  | ident info .. => info
  | node _ args   => args.findSomeRev? getTailInfo
  | _             => none

@[specialize] private partial def updateLast {α} [Inhabited α] (a : Array α) (f : α → Option α) (i : Nat) : Option (Array α) :=
  if i == 0 then none
  else
    let i := i - 1;
    let v := a.get! i;
    match f v with
    | some v => some $ a.set! i v
    | none   => updateLast a f i

partial def setTailInfoAux (info : SourceInfo) : Syntax → Option Syntax
  | atom _ val             => some $ atom info val
  | ident _ rawVal val pre => some $ ident info rawVal val pre
  | node k args            =>
    match updateLast args (setTailInfoAux info) args.size with
    | some args => some $ node k args
    | none      => none
  | stx                    => none

def setTailInfo (stx : Syntax) (info : SourceInfo) : Syntax :=
  match setTailInfoAux info stx with
  | some stx => stx
  | none     => stx

def unsetTrailing (stx : Syntax) : Syntax :=
  match stx.getTailInfo with
  | none      => stx
  | some info => stx.setTailInfo { info with trailing := none }

@[specialize] private partial def updateFirst {α} [Inhabited α] (a : Array α) (f : α → Option α) (i : Nat) : Option (Array α) :=
  if h : i < a.size then
    let v := a.get ⟨i, h⟩;
    match f v with
    | some v => some $ a.set ⟨i, h⟩ v
    | none   => updateFirst a f (i+1)
  else
    none

partial def setHeadInfoAux (info : SourceInfo) : Syntax → Option Syntax
  | atom _ val             => some $ atom info val
  | ident _ rawVal val pre => some $ ident info rawVal val pre
  | node k args            =>
    match updateFirst args (setHeadInfoAux info) 0 with
    | some args => some $ node k args
    | noxne     => none
  | stx                    => none

def setHeadInfo (stx : Syntax) (info : SourceInfo) : Syntax :=
  match setHeadInfoAux info stx with
  | some stx => stx
  | none     => stx

def setInfo (info : SourceInfo) : Syntax → Syntax
  | atom _ val             => atom info val
  | ident _ rawVal val pre => ident info rawVal val pre
  | stx                    => stx

partial def replaceInfo (info : SourceInfo) : Syntax → Syntax
  | node k args => node k $ args.map (replaceInfo info)
  | stx         => setInfo info stx

def copyInfo (s : Syntax) (source : Syntax) : Syntax :=
  match source.getHeadInfo with
  | none      => s
  | some info => s.setHeadInfo info

def copyTailInfo (s : Syntax) (source : Syntax) : Syntax :=
  match source.getTailInfo with
  | none      => s
  | some info => s.setTailInfo info

end Syntax

def mkAtom (val : String) : Syntax :=
  Syntax.atom {} val

@[inline] def mkNode (k : SyntaxNodeKind) (args : Array Syntax) : Syntax :=
  Syntax.node k args

/- Syntax objects for a Lean module. -/
structure Module :=
  (header   : Syntax)
  (commands : Array Syntax)

/-- Expand all macros in the given syntax -/
partial def expandMacros : Syntax → MacroM Syntax
  | stx@(Syntax.node k args) => do
    match (← expandMacro? stx) with
    | some stxNew => expandMacros stxNew
    | none        => do
      let args ← Macro.withIncRecDepth stx $ args.mapM expandMacros
      pure $ Syntax.node k args
  | stx => pure stx

/- Helper functions for processing Syntax programmatically -/

/--
  Create an identifier using `SourceInfo` from `src`.
  To refer to a specific constant, use `mkCIdentFrom` instead. -/
def mkIdentFrom (src : Syntax) (val : Name) : Syntax :=
  let info := src.getHeadInfo.getD {}
  Syntax.ident info (toString val).toSubstring val []

/--
  Create an identifier referring to a constant `c` using `SourceInfo` from `src`.
  This variant of `mkIdentFrom` makes sure that the identifier cannot accidentally
  be captured. -/
def mkCIdentFrom (src : Syntax) (c : Name) : Syntax :=
  let info := src.getHeadInfo.getD {}
  -- Remark: We use the reserved macro scope to make sure there are no accidental collision with our frontend
  let id   := addMacroScope `_internal c reservedMacroScope
  Syntax.ident info (toString id).toSubstring id [(c, [])]

def mkCIdent (c : Name) : Syntax :=
  mkCIdentFrom Syntax.missing c

def mkAtomFrom (src : Syntax) (val : String) : Syntax :=
  let info := src.getHeadInfo.getD {}
  Syntax.atom info val

def Syntax.identToAtom (stx : Syntax) : Syntax :=
  match stx with
  | Syntax.ident info _ val _ => Syntax.atom info (toString val.eraseMacroScopes)
  | _                         => stx

@[export lean_mk_syntax_ident]
def mkIdent (val : Name) : Syntax :=
  Syntax.ident {} (toString val).toSubstring val []

@[inline] def mkNullNode (args : Array Syntax := #[]) : Syntax :=
  Syntax.node nullKind args

def mkSepArray (as : Array Syntax) (sep : Syntax) : Array Syntax := do
  let mut i := 0
  let mut r := #[]
  for a in as do
    if i > 0 then
      r := r.push sep $.push a
    else
      r := r.push a
    i := i + 1
  return r

def mkOptionalNode (arg : Option Syntax) : Syntax :=
  match arg with
  | some arg => Syntax.node nullKind #[arg]
  | none     => Syntax.node nullKind #[]

def mkHole (ref : Syntax) : Syntax :=
  Syntax.node `Lean.Parser.Term.hole #[mkAtomFrom ref "_"]

namespace Syntax

def mkSep (a : Array Syntax) (sep : Syntax) : Syntax :=
  mkNullNode $ mkSepArray a sep

/-- Create syntax representing a Lean term application, but avoid degenerate empty applications. -/
def mkApp (fn : Syntax) : (args : Array Syntax) → Syntax
  | #[]  => fn
  | args => Syntax.node `Lean.Parser.Term.app #[fn, mkNullNode args]

def mkCApp (fn : Name) (args : Array Syntax) : Syntax :=
  mkApp (mkCIdent fn) args

def mkLit (kind : SyntaxNodeKind) (val : String) (info : SourceInfo := {}) : Syntax :=
  let atom : Syntax := Syntax.atom info val
  Syntax.node kind #[atom]

def mkStrLit (val : String) (info : SourceInfo := {}) : Syntax :=
  mkLit strLitKind (repr val) info

def mkNumLit (val : String) (info : SourceInfo := {}) : Syntax :=
  mkLit numLitKind val info

/- Recall that we don't have special Syntax constructors for storing numeric and string atoms.
   The idea is to have an extensible approach where embedded DSLs may have new kind of atoms and/or
   different ways of representing them. So, our atoms contain just the parsed string.
   The main Lean parser uses the kind `numLitKind` for storing natural numbers that can be encoded
   in binary, octal, decimal and hexadecimal format. `isNatLit` implements a "decoder"
   for Syntax objects representing these numerals. -/

private partial def decodeBinLitAux (s : String) (i : String.Pos) (val : Nat) : Option Nat :=
  if s.atEnd i then some val
  else
    let c := s.get i
    if c == '0' then decodeBinLitAux s (s.next i) (2*val)
    else if c == '1' then decodeBinLitAux s (s.next i) (2*val + 1)
    else none

private partial def decodeOctalLitAux (s : String) (i : String.Pos) (val : Nat) : Option Nat :=
  if s.atEnd i then some val
  else
    let c := s.get i
    if '0' ≤ c && c ≤ '7' then decodeOctalLitAux s (s.next i) (8*val + c.toNat - '0'.toNat)
    else none

private def decodeHexDigit (s : String) (i : String.Pos) : Option (Nat × String.Pos) :=
  let c := s.get i
  let i := s.next i
  if '0' ≤ c && c ≤ '9' then some (c.toNat - '0'.toNat, i)
  else if 'a' ≤ c && c ≤ 'f' then some (10 + c.toNat - 'a'.toNat, i)
  else if 'A' ≤ c && c ≤ 'F' then some (10 + c.toNat - 'A'.toNat, i)
  else none

private partial def decodeHexLitAux (s : String) (i : String.Pos) (val : Nat) : Option Nat :=
  if s.atEnd i then some val
  else match decodeHexDigit s i with
    | some (d, i) => decodeHexLitAux s i (16*val + d)
    | none        => none

private partial def decodeDecimalLitAux (s : String) (i : String.Pos) (val : Nat) : Option Nat :=
  if s.atEnd i then some val
  else
    let c := s.get i
    if '0' ≤ c && c ≤ '9' then decodeDecimalLitAux s (s.next i) (10*val + c.toNat - '0'.toNat)
    else none

def decodeNatLitVal (s : String) : Option Nat :=
  let len := s.length
  if len == 0 then none
  else
    let c := s.get 0
    if c == '0' then
      if len == 1 then some 0
      else
        let c := s.get 1
        if c == 'x' || c == 'X' then decodeHexLitAux s 2 0
        else if c == 'b' || c == 'B' then decodeBinLitAux s 2 0
        else if c == 'o' || c == 'O' then decodeOctalLitAux s 2 0
        else if c.isDigit then decodeDecimalLitAux s 0 0
        else none
    else if c.isDigit then decodeDecimalLitAux s 0 0
    else none

def isLit? (litKind : SyntaxNodeKind) (stx : Syntax) : Option String :=
  match stx with
  | Syntax.node k args =>
    if k == litKind && args.size == 1 then
      match args.get! 0 with
      | (Syntax.atom _ val) => some val
      | _ => none
    else
      none
  | _ => none

def isNatLitAux (litKind : SyntaxNodeKind) (stx : Syntax) : Option Nat :=
  match isLit? litKind stx with
  | some val => decodeNatLitVal val
  | _        => none

def isNatLit? (s : Syntax) : Option Nat :=
  isNatLitAux numLitKind s

def isFieldIdx? (s : Syntax) : Option Nat :=
  isNatLitAux fieldIdxKind s

def isIdOrAtom? : Syntax → Option String
  | Syntax.atom _ val           => some val
  | Syntax.ident _ rawVal _ _   => some rawVal.toString
  | _ => none

def toNat (stx : Syntax) : Nat :=
  match stx.isNatLit? with
  | some val => val
  | none     => 0

def decodeQuotedChar (s : String) (i : String.Pos) : Option (Char × String.Pos) := do
  let c := s.get i
  let i := s.next i
  if c == '\\' then pure ('\\', i)
  else if c = '\"' then pure ('\"', i)
  else if c = '\'' then pure ('\'', i)
  else if c = 'r'  then pure ('\r', i)
  else if c = 'n'  then pure ('\n', i)
  else if c = 't'  then pure ('\t', i)
  else if c = 'x'  then
    let (d₁, i) ← decodeHexDigit s i
    let (d₂, i) ← decodeHexDigit s i
    pure (Char.ofNat (16*d₁ + d₂), i)
  else if c = 'u'  then do
    let (d₁, i) ← decodeHexDigit s i
    let (d₂, i) ← decodeHexDigit s i
    let (d₃, i) ← decodeHexDigit s i
    let (d₄, i) ← decodeHexDigit s i
    pure (Char.ofNat (16*(16*(16*d₁ + d₂) + d₃) + d₄), i)
  else
    none

partial def decodeStrLitAux (s : String) (i : String.Pos) (acc : String) : Option String := do
  let c := s.get i
  let i := s.next i
  if c == '\"' then
    pure acc
  else if s.atEnd i then
    none
  else if c == '\\' then do
    let (c, i) ← decodeQuotedChar s i
    decodeStrLitAux s i (acc.push c)
  else
    decodeStrLitAux s i (acc.push c)

def decodeStrLit (s : String) : Option String :=
  decodeStrLitAux s 1 ""

def isStrLit? (stx : Syntax) : Option String :=
  match isLit? strLitKind stx with
  | some val => decodeStrLit val
  | _        => none

def decodeCharLit (s : String) : Option Char :=
  let c := s.get 1
  if c == '\\' then do
    let (c, _) ← decodeQuotedChar s 2
    pure c
  else
    pure c

def isCharLit? (stx : Syntax) : Option Char :=
  match isLit? charLitKind stx with
  | some val => decodeCharLit val
  | _        => none

private partial def decodeNameLitAux (s : String) (i : Nat) (r : Name) : Option Name := do
  let continue? (i : Nat) (r : Name) : Option Name :=
    if s.get i == '.' then
       decodeNameLitAux s (s.next i) r
    else if s.atEnd i then
       pure r
    else
       none
  let curr := s.get i
  if isIdBeginEscape curr then
    let startPart := s.next i
    let stopPart  := s.nextUntil isIdEndEscape startPart
    if !isIdEndEscape (s.get stopPart) then none
    else continue? (s.next stopPart) (Name.mkStr r (s.extract startPart stopPart))
  else if isIdFirst curr then
    let startPart := i
    let stopPart  := s.nextWhile isIdRest startPart
    continue? stopPart (Name.mkStr r (s.extract startPart stopPart))
  else
    none

def decodeNameLit (s : String) : Option Name :=
  if s.get 0 == '`' then
    decodeNameLitAux s 1 Name.anonymous
  else
    none

def isNameLit? (stx : Syntax) : Option Name :=
  match isLit? nameLitKind stx with
  | some val => decodeNameLit val
  | _        => none

def hasArgs : Syntax → Bool
  | Syntax.node _ args => args.size > 0
  | _                  => false

def identToStrLit (stx : Syntax) : Syntax :=
  match stx with
  | Syntax.ident info _ val _ => mkStrLit (toString val) info
  | _                         => stx

def strLitToAtom (stx : Syntax) : Syntax :=
  match stx.isStrLit? with
  | none     => stx
  | some val => Syntax.atom stx.getHeadInfo.get! val

def isAtom : Syntax → Bool
  | atom _ _ => true
  | _        => false

def isToken (token : String) : Syntax → Bool
  | atom _ val => val.trim == token.trim
  | _          => false

def isIdent : Syntax → Bool
  | ident _ _ _ _ => true
  | _             => false

def getId : Syntax → Name
  | ident _ _ val _ => val
  | _               => Name.anonymous

def isNone (stx : Syntax) : Bool :=
  match stx with
  | Syntax.node k args => k == nullKind && args.size == 0
  | _                  => false

def getOptional? (stx : Syntax) : Option Syntax :=
  match stx with
  | Syntax.node k args => if k == nullKind && args.size == 1 then some (args.get! 0) else none
  | _                  => none

def getOptionalIdent? (stx : Syntax) : Option Name :=
  match stx.getOptional? with
  | some stx => some stx.getId
  | none     => none

partial def findAux (p : Syntax → Bool) : Syntax → Option Syntax
  | stx@(Syntax.node _ args) => if p stx then some stx else args.findSome? (findAux p)
  | stx                      => if p stx then some stx else none

def find? (stx : Syntax) (p : Syntax → Bool) : Option Syntax :=
  findAux p stx

end Syntax

/-- Reflect a runtime datum back to surface syntax (best-effort). -/
class Quote (α : Type) :=
  (quote : α → Syntax)

export Quote (quote)

instance : Quote Syntax := ⟨id⟩
instance : Quote Bool := ⟨fun | true => mkCIdent `Bool.true | false => mkCIdent `Bool.false⟩
instance : Quote String := ⟨Syntax.mkStrLit⟩
instance : Quote Nat := ⟨fun n => Syntax.mkNumLit $ toString n⟩
instance : Quote Substring := ⟨fun s => Syntax.mkCApp `String.toSubstring #[quote s.toString]⟩

private def quoteName : Name → Syntax
  | Name.anonymous => mkCIdent `Lean.Name.anonymous
  | Name.str n s _ => Syntax.mkCApp `Lean.Name.mkStr #[quoteName n, quote s]
  | Name.num n i _ => Syntax.mkCApp `Lean.Name.mkNum #[quoteName n, quote i]

instance : Quote Name := ⟨quoteName⟩

instance {α β : Type} [Quote α] [Quote β] : Quote (α × β) :=
  ⟨fun ⟨a, b⟩ => Syntax.mkCApp `Prod.mk #[quote a, quote b]⟩

private def quoteList {α : Type} [Quote α] : List α → Syntax
  | []      => mkCIdent `List.nil
  | (x::xs) => Syntax.mkCApp `List.cons #[quote x, quoteList xs]

instance {α : Type} [Quote α] : Quote (List α) := ⟨quoteList⟩

instance {α : Type} [Quote α] : Quote (Array α) :=
  ⟨fun xs => Syntax.mkCApp `List.toArray #[quote xs.toList]⟩

private def quoteOption {α : Type} [Quote α] : Option α → Syntax
  | none     => mkIdent `Option.none
  | (some x) => Syntax.mkCApp `Option.some #[quote x]

instance Option.hasQuote {α : Type} [Quote α] : Quote (Option α) := ⟨quoteOption⟩

end Lean

namespace Array

abbrev getSepElems := @getEvenElems

open Lean

private partial def filterSepElemsMAux {m : Type → Type} [Monad m] (a : Array Syntax) (p : Syntax → m Bool) (i : Nat) (acc : Array Syntax) : m (Array Syntax) := do
  if h : i < a.size then
    let stx := a.get ⟨i, h⟩
    if (← p stx) then
      if acc.isEmpty then
        filterSepElemsMAux a p (i+2) (acc.push stx)
      else if hz : i ≠ 0 then
        have i.pred < i from Nat.predLt hz
        let sepStx := a.get ⟨i.pred, Nat.ltTrans this h⟩
        filterSepElemsMAux a p (i+2) ((acc.push sepStx).push stx)
      else
        filterSepElemsMAux a p (i+2) (acc.push stx)
    else
      filterSepElemsMAux a p (i+2) acc
  else
    pure acc

def filterSepElemsM {m : Type → Type} [Monad m] (a : Array Syntax) (p : Syntax → m Bool) : m (Array Syntax) :=
  filterSepElemsMAux a p 0 #[]

def filterSepElems (a : Array Syntax) (p : Syntax → Bool) : Array Syntax :=
  Id.run $ a.filterSepElemsM p

private partial def mapSepElemsMAux {m : Type → Type} [Monad m] (a : Array Syntax) (f : Syntax → m Syntax) (i : Nat) (acc : Array Syntax) : m (Array Syntax) := do
  if h : i < a.size then
    let stx := a.get ⟨i, h⟩
    if i % 2 == 0 then do
      let stx ← f stx
      mapSepElemsMAux a f (i+1) (acc.push stx)
    else
      mapSepElemsMAux a f (i+1) (acc.push stx)
  else
    pure acc

def mapSepElemsM {m : Type → Type} [Monad m] (a : Array Syntax) (f : Syntax → m Syntax) : m (Array Syntax) :=
  mapSepElemsMAux a f 0 #[]

def mapSepElems (a : Array Syntax) (f : Syntax → Syntax) : Array Syntax :=
  Id.run $ a.mapSepElemsM f

end Array

/--
  Gadget for automatic parameter support. This is similar to the `optParam` gadget, but it uses
  the given tactic.
  Like `optParam`, this gadget only affects elaboration.
  For example, the tactic will *not* be invoked during type class resolution. -/
abbrev autoParam.{u} (α : Sort u) (tactic : Lean.Syntax) : Sort u := α

/- Helper functions for manipulating interpolated strings -/
namespace Lean.Syntax

private def decodeInterpStrQuotedChar (s : String) (i : String.Pos) : Option (Char × String.Pos) :=
  match decodeQuotedChar s i with
  | some r => some r
  | none   =>
    let c := s.get i
    let i := s.next i
    if c == '{' then pure ('{', i)
    else none

private partial def decodeInterpStrLit (s : String) : Option String :=
  let rec loop (i : String.Pos) (acc : String) :=
    let c := s.get i
    let i := s.next i
    if c == '\"' || c == '{' then
      pure acc
    else if s.atEnd i then
      none
    else if c == '\\' then do
      let (c, i) ← decodeInterpStrQuotedChar s i
      loop i (acc.push c)
    else
      loop i (acc.push c)
  loop 1 ""

partial def isInterpolatedStrLit? (stx : Syntax) : Option String :=
  match isLit? interpolatedStrLitKind stx with
  | none     => none
  | some val => decodeInterpStrLit val

def expandInterpolatedStrChunks (chunks : Array Syntax) (mkAppend : Syntax → Syntax → MacroM Syntax) (mkElem : Syntax → MacroM Syntax) : MacroM Syntax := do
  let mut i := 0
  let mut result := Syntax.missing
  for elem in chunks do
    let elem ← match elem.isInterpolatedStrLit? with
      | none     => mkElem elem
      | some str => mkElem (Syntax.mkStrLit str)
    if i == 0 then
      result := elem
    else
      result ← mkAppend result elem
    i := i+1
  return result

def getSepArgs (stx : Syntax) : Array Syntax :=
  stx.getArgs.getSepElems

end Lean.Syntax
