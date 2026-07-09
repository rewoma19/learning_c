#include <stdio.h>

  // typedef is a reserved keyword that gives an existing datatype a "nickname" and helps simplify complex types and improves code readability
  // typedef existing_type new_name

typedef int Number; 
typedef char String[50];
typedef char Initials[3];

int main() {

  Number x = 3;
  Number y = 4;
  Number z = x + y;

  String name = "Raphael Odeareduo";
  Initials user1[] = "BC";
  Initials user2[] = "SS";
  Initials user3[] = "PS";
  Initials user4[] = "ST";

  printf("%s\n", user1);
  printf("%s\n", user2);
  printf("%s\n", user3);
  printf("%s\n", user4);

  return 0;
}