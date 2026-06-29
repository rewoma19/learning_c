#include <stdio.h>
// Header file for strings that provides useful functions for working with strings
#include <string.h>

int main() {

  // printf("Hello");


  // Declaring variable as undefined
  // int age;
  // float gpa;
  // char grade;
  // char name[30]; // max size of 30 characters expected

  int age = 0;
  float gpa = 0.0;
  char grade = '\0';
  char name[30] = ""; // max size of 30 characters expected

  // We have this print statement before using the scanf user input function to sort of act as an input placeholder
  printf("Enter your age: ");
  // scanf function is used for user input
  // & operator before age indicates that at the address of the variable age, stick a value in there
  scanf("%d", &age);

  printf("Enter your gpa: ");
  scanf("%f", &gpa);

  printf("Enter your grade: ");
  // Adding space before % in scanf function to remove input buffer
  scanf(" %c", &grade);

  printf("Enter your first name: ");
  // scanf("%s", name);

  // Note that the scanf input function cannot read whitespace. To tackle this, use the fgets function
  // fgets(variable, size of variable, stdin)
  // for variable size, the sizeof() method can also be used
  // stdin => standard input
  // fgets(name, 30, stdin);

  // getchar() gets rid of input buffer aswell
  getchar();
  printf("Enter your full name: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';

  // Attempting to display variables with undefined values will result in different random values on each run
  printf("%s\n", name);
  printf("%d\n", age);
  printf("%.1f\n", gpa);
  printf("%c\n", grade);

  return 0;
}