

int funktion (int x_f) {
  //.... x_f = [0, 12]; y = [1, 2]

  x_f = x_f * 2;

  return x_f; //x_f = [0, 24]; y = [1, 2]
}

int y; //global

int main() {
  int x; //lokal
  x = 0;

  y = 1;
  // x = [0, 0], y = [1, 1]
  x = funktion(0); // x_f = x = [0, 0]; y = [1, 1]
  // x = [0, 24], y = [1, 1]

  if(y == 2)
  {
    //... -> DEAD
  }


  y = 2;
  // x = [0, 0], y = [2, 2]
  x = funktion(12); // x_f = x = [12, 12]; y = [2, 2]
  // x = [0, 24], y = [2, 2]



}