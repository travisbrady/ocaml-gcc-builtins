#include <stdio.h>
#include <caml/mlvalues.h>

CAMLprim value
caml_print_hello(value unit)
{
    printf("Hello\n");
    return Val_unit;
}

CAMLprim value
caml_popcount(value v) {
    int x;
    x = Int_val(v);
    int res = __builtin_popcount(x);
    printf("FROM C: %d %d\n", x, res);
    return Val_int(res);
}

CAMLprim value
caml_clz(value v) {
    int x;
    x = Int_val(v);
    int res = __builtin_clz(x);
    printf("FROM C: %d %d\n", x, res);
    return Val_int(res);
}

CAMLprim value
caml_ctz(value v) {
    int x;
    x = Int_val(v);
    int res = __builtin_ctz(x);
    printf("FROM C ctz: %d %d\n", x, res);
    return Val_int(res);
}
