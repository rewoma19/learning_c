#include <stdio.h>

int main() {

  int x = 10;
  int y = 3;
  int z = 0; // z will store our result

  // z = x + y;
  // z = x - y;
  // z = x * y;

  // NOTE that this will be 0, because the decimal portion cannot be retained unless we are dividing by a float
  // z = x / y;

  // z = x % y;

  // z++;
  // z--;

  // z += 2;
  z -= 2;

  printf("%d\n", z);



  return 0;
}