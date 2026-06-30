#include <stdio.h>

void happyBirthday(char name[], int age) {
  printf("\nHappy birthday to you!");
  printf("\nHappy birthday to you!");
  printf("\nHappy birthday dear %s!", name);
  printf("\nYou are %d years old\n", age);
}

int main() {
  char name[] = "Raphael";
  int age = 20;

  happyBirthday(name, age);

  return 0;
}