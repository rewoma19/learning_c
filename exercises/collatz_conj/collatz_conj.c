#include "collatz_conj.h"
#include <stdbool.h>

int steps(int start) {

  if (start <= 0) {
    return -1;
  }

  int numSteps = 0;
  
  while (start != 1) { 
    bool numIsEven = (start % 2) == 0;

      if (numIsEven) {
        start /= 2;
      } else {
        start = (start * 3) + 1;
      }

      numSteps += 1;
  }
  
  return numSteps;
}