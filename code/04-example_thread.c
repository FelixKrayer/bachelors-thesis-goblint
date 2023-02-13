int a;

void *tproc() {
  a = 2; |\label{code:assign2}|
}
void procedure() {
  //... (no thread creation)
}

void main() {
  procedure(); |\label{code:proc1}|
  
  a = 1; |\label{code:assign1}|
  create(tproc); |\label{code:create}|

  procedure(); |\label{code:proc2}|
}