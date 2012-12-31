OCAMLMAKEFILE = OCamlMakefile

SOURCES = gcc_builtins_stubs.c gcc_builtins.ml
RESULT  = gcc_builtins

all: native-code
include $(OCAMLMAKEFILE)
