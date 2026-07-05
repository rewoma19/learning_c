#include "grains.h"

uint64_t square(uint8_t index) {
  if (index == 0 || index > 64) {
    return 0;
  }

  uint64_t numOfGrains = 1;

  for (uint8_t i = 1; i < index; i++) {
    numOfGrains *= 2;
  }

  return numOfGrains;
}

uint64_t total(void) {
  uint64_t totalGrains = 0;

  for (uint8_t i = 1; i <= 64; i++) {
    totalGrains += square(i);
  }

  return totalGrains;
}
