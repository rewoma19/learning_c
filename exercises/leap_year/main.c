#include <stdio.h>
#include "leap.h"

int main(void) {
  int year = 2000;

  if (leap_year(year)) {
    printf("%d is a leap year\n", year);
  } else {
    printf("%d is not a leap year\n", year);
  }

  return 0;
}