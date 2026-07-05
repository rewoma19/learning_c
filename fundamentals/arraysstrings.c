#include <stdio.h>

int main(void) {

  char fruits[][10] = {"Apple", 
                        "Pear", 
                        "Bananas"};
                        
  size_t fruitsSize = sizeof(fruits) / sizeof(fruits[0]);

  for (int i = 0; i < fruitsSize; i++) {
    printf("%s\n", fruits[i]);
  }

  return 0;
}