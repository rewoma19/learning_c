#include <stdio.h>
#include <inttypes.h>
#include "grains.h"

int main(void) {
  uint64_t index60 = square(60);
  uint64_t totalGrains = total();

  printf("There are %llu grains on the 60th square. \n", index60);
  printf("There are %llu grains in total. \n", totalGrains);

  return 0;
}
