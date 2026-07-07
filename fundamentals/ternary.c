#include <stdio.h>
#include <stdbool.h>

int main() {
  int x = 5;
  int y = 6;
  int max = (x > y) ? x : y;

  // printf("%d", max);

  bool isOnline = true;
  const char *onlineStatus = (isOnline) ? "online" : "offline";

  printf("\n%s", onlineStatus);

  int num = 8;
  const char *numType = (num % 2 == 0) ? "even" : "odd";

  printf("\n%d is %s", num, numType);

  int age = 20;
  const char *ageGrade = (age > 18) ? "adult" : "child";

  printf("\n%s", ageGrade);

  int hours = 11;
  int minutes = 30;

  // POINTER
  const char *meridiem = (hours < 12) ? "AM" : "PM";

  printf("\n%02d : %02d %s", hours, minutes, meridiem);

  return 0;
}