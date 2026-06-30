#include <stdio.h>

int sqrNum(int num) {
  int result = num * num;
  return result;
}

int main() {

  int x = sqrNum(2);
  int y = sqrNum(3);
  int z = sqrNum(4);

  printf("%d\n", x);
  printf("%d\n", y);
  printf("%d\n", z);

  return 0;
}