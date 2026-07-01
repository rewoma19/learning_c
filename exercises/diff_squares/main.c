#include <stdio.h>
#include "diff.h"

int main() {
  int n = 10;

  unsigned int result1 = square_of_sum(n); // 3025
  unsigned int result2 = sum_of_squares(n); // 385
  unsigned int result3 = difference_of_squares(n); // 2640

  printf("%d\n", result1);
  printf("%d\n", result2);
  printf("%d\n", result3);

  return 0;
}