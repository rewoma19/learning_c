#include <stdio.h>

int main() {
  // Useful for matrix or grid of data
  int numbers[][3] = {
    {1, 2, 3}, 
    {4, 5, 6}, 
    {7, 8, 9}
  };

  size_t matrixSize = sizeof(numbers);
  size_t rowsSize= matrixSize / sizeof(numbers[0]);
  size_t columnsSize = sizeof(numbers[0]) / sizeof(numbers[0][0]);

  printf("%d\n", numbers[0][0]);
  printf("%d\n", numbers[0][1]);

  for (int i = 0; i < rowsSize; i++) {
    for (int j = 0; j < columnsSize; j++) {
      printf("%d", numbers[i][j]);
    }
    printf("\n");
  }

  return 0;
}