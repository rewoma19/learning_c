#include <stdio.h>

// Pointers let a function modify a variable from outside its scope.

void birthday(int *age);

int main(void) {
  // A pointer is a variable that stores the memory address of another variable. 
  // The benefit is that it helps avoid wasting memory by allowing you to pass the address of a large data structure instead of copying the entire data.

  int age = 20;
  // prints memory address of the age variable
  // printf("%p\n", &age); 

  // * is part of the type declarator for the pointer
  // Common naming convention for pointer variables is to have "p" followed by the reference variable
  // int *pAge = &age;

  // memory address should be the same as that of the age variable
  // printf("%p\n", pAge); 

  birthday(&age); // give me the memory address of age
  printf("You are %d years old\n", age);

  return 0;
}

// int *age => function receives the address of an int
void birthday(int *age) {
  // go to that address, find the real int stored there, and add 1 to it
  // * in this case => dereference operator
  *age += 1;
}