void function() {
  //...
}

int glob;
void main() {
  glob = 1;
  function();|\label{code:call1}|

  glob = 2;
  function();|\label{code:call2}|
}