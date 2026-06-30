#include <stdio.h>
#include <stdbool.h>

int main() {
  // int temp = 100;

  // if (temp <= 0 || temp >= 30) {
  //   printf("The temperature is BAD");
  // } 
  // else {
  //   printf("The temperature is GOOD");
  // }

  bool isSunny = true;

  if (!isSunny) {
    printf("It is CLOUDY outside");
  } else {
    printf("It is SUNNY outside");
  }

  return 0;
}