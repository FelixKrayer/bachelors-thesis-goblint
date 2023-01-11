int function (int a) {
  //a = [0, 12]; y = [1, 2]
  a = a * 2;
  return a; //x_f = [0, 24]; y = [1, 2]
}

int y; //global

int main() {
  int x; //local
  x = 0;

  y = 1;
  x = function(0); // a = x = [0, 0]; y = [1, 1]
  // x = [0, 24], y = [1, 1]

  //...

  y = 2;
  x = function(12); // a = x = [12, 12]; y = [2, 2]
  // x = [0, 24], y = [2, 2]
}