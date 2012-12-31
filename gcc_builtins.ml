external print_hello: unit -> unit = "caml_print_hello"

external popcount: int -> int = "caml_popcount"
external clz: int -> int = "caml_clz"
external ctz: int -> int = "caml_ctz"

let () =
    let res = popcount 7 in
    Printf.printf "FROM OCAML: %d\n" res;
    Printf.printf "CLZ: %d\n" (clz 7);
    Printf.printf "CTZ: %d\n" (ctz 7);
    print_hello ()
