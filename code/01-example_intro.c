int glob;

void foo() {
  //...
}

void main() {
  glob = 1;
  foo();|\label{code:call1}|

  glob = 2;
  foo();|\label{code:call2}|
}