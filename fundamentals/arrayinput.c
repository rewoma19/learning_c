#include <stdio.h>

int main() {

  int scores[5] = {0};

  // Adding items to an array
  for (int i = 0; i < 5; i++) {
    printf("Enter a score: ");
    scanf("%d", &scores[i]);
  }

  return 0;
}