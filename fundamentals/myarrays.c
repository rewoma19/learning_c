#include <stdio.h>

int main() {
  int numbers[] = {10, 20, 30};
  char grades[] = {'A', 'B', 'C', 'D', 'F'};

  numbers[0] = 100;

  size_t gradesSize = sizeof(grades) / sizeof(grades[0]);

  for (int i = 0; i < gradesSize; i++) {
    printf("%c\n", grades[i]);
  }

  return 0;
}