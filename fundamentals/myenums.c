#include <stdio.h>

// enum values will be based on index/position by default
enum Day {
  SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};

enum Day2 {
  SUNDAY = 1,
  MONDAY = 2,
  TUESDAY = 3,
  WEDNESDAY = 4,
  THURSDAY = 5,
  FRIDAY = 6,
  SATURDAY = 7
};

// Combing typedef and enum keywords
// enum name will then come after the curly braces, before the semi-colon
typedef enum {
  SUCCESS, FAILURE, PENDING
}Status;

int main() {
  // Enums are user-defined data types that consists of a set of named integer constants.

  enum Day today = SUNDAY;
  Status status = SUCCESS;

  printf("%d", today);

  connectStatus(status);

  return 0;
}

void connectStatus(Status status) {
  switch(status) {
    case SUCCESS:
      printf("Connection was successful\n");
      break;
    case FAILURE:
      printf("Could not connect\n");
      break;
    case PENDING:
      printf("Connecting...\n");
      break;
  }
}