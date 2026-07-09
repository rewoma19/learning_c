#include <stdio.h>
#include <stdbool.h>

// struct Student {
//   char name[50];
//   int age;
//   float gpa;
//   bool isFullTime;
// };

typedef struct {
  char name[50];
  int age;
  float gpa;
  bool isFullTime;
}Student;

int main() {
  // A struct is a custom container that holds multiple pieces of related information. We can think of it like objects in other languages

  // struct Student student1 = {
  //   "Spongebob",
  //   30,
  //   2.5,
  //   true
  // };

  Student student1 = {
    "Spongebob",
    30,
    2.5,
    true
  };

  printf("%s\n", student1.name);
  printf("%d\n", student1.age);

  return 0;
}