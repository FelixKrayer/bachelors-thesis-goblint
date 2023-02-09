int a;

void *tproc() {
  a = 2; |\label{code:assign2}|
}
int procedure() {
  //... (no thread creation)
}

int main() {
  procedure(); |\label{code:proc1}|
  
  a = 1; |\label{code:assign1}|
  create(tproc); |\label{code:create}|

  procedure(); |\label{code:proc2}|
}