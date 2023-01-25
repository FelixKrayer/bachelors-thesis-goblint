let taint_lval ctx (lval:lval) : D.t =
  let d = ctx.local in
  (match lval with 
  | (Var v, offs) -> D.add (v, resolve offs) d
  | (Mem e, _) -> D.union (ctx.ask (Queries.MayPointTo e)) d
  )

let assign ctx (lval:lval) (rval:exp) : D.t =
  taint_lval ctx lval