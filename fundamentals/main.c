// "Preprocessor directive: Telling the compiler to include the standard input output library"
#include <stdio.h>

// Header file needed to work with booleans
#include <stdbool.h>

// Main function is expected to return an integer.
// Non-zero value would indicate an error
int main(){

  // This is my first C program! :)

  /*
  This
  is
  also
  a
  comment
  */

  int age = 20;
  int year = 2026;
  int quantity = 1;

  float gpa = 3.0;
  float price = 19.99;
  float temp = -10.1;

  printf("Your gpa is %.1f\n", gpa);
  printf("The price is $%.2f\n", price);

  printf("You are %d years old\n", age);
  printf("The year is %d\n", year);
  printf("You have ordered %d items\n", quantity);

  printf("I like pizza!\n");
  printf("It's really good!");

  printf("The temp is %.1fF\n", temp);

  char grade = 'A';
  char symbol = '!';
  char currency = '$';

  printf("Your grade is %c\n", grade);
  printf("Your favorite symbol is %c", symbol);
  printf("The currency is %c\n", currency);

  // WE DO NOT HAVE STRINGS IN C. WE INSTEAD USE AN ARRAY OF CHARACTERS
  char name[] = "Raphael";
  char food[] = "Pizza";
  char email[] = "fake123@gmail.com";

  printf("Hello, my name is %s\n", name);
  printf("Your favorite food is %s\n", food);
  printf("Your email is %s\n", email);

  // true also corresponds to 1 and false corresponds to 0
  bool isOnline = true;
  bool isStudent = true;

  // Displaying bool with d format specifier
  printf("%d\n", isOnline);

  if(isOnline){
    printf("You are ONLINE");
  }
  else{
    printf("You are OFFLINE");
  }

  if (isStudent){
    printf("You are a student");
  }
  else{
    printf("You are NOT a student");
  }

  return 0;
}