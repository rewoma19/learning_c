#include <stdio.h>
// Header file needed to work with booleans
#include <stdbool.h>
#include <string.h>

int main() {

  char name[50] = "";

  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);

  if (strlen(name) == 0) {
    printf("You did not enter your name");
  }
  else{
    printf("Hello %s", name);
  }

  // bool isStudent = true;

  // if (isStudent) {
  //   printf("You are a student");
  // }
  // else{
  //   printf("You are NOT a student");
  // }

  // int age = 2;

  // if(age >= 18) {
  //   printf("You are an adult");
  // }
  // else if(age < 0) {
  //   printf("You have not been born yet");
  // }
  // else if(age == 0){
  //   printf("You are a newborn");
  // }
  // else{
  //   printf("You are a child");
  // }

  return 0;
}