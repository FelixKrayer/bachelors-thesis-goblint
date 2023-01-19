module type Spec =
sig
  module D : Lattice.S
  module C : Printable.S

  val name : unit -> string

  val startstate : varinfo -> D.t

  val assign: (D.t, C.t) ctx -> lval -> exp -> D.t
  val vdecl : (D.t, C.t) ctx -> varinfo -> D.t
  val branch: (D.t, C.t) ctx -> exp -> bool -> D.t
  val return: (D.t, C.t) ctx -> exp option  -> fundec -> D.t
  val query : (D.t, C.t) ctx -> 'a Queries.t -> 'a Queries.result

  val special : (D.t, C.t) ctx -> lval option -> varinfo -> exp list -> D.t
  val enter   : (D.t, C.t) ctx -> lval option -> fundec -> exp list -> (D.t * D.t) list
  val combine : (D.t, C.t) ctx -> lval option -> exp -> fundec -> exp list -> C.t option -> D.t -> D.t

  val context : fundec -> D.t -> C.t

  val threadenter : (D.t, C.t) ctx -> lval option -> varinfo -> exp list -> D.t list
  val threadspawn : (D.t, C.t) ctx -> lval option -> varinfo -> exp list -> (D.t, C.t) ctx -> D.t
end