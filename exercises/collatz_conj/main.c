#include <stdio.h>
#include "collatz_conj.h"

int main(void) {
  int n = 12;

  int numSteps = steps(n);

  printf("It took %d steps to reach 1 from %d", numSteps, n);

  return 0;
}