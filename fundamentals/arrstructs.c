#include <stdio.h>

// struct Car {
//   char model[25];
//   int year;
//   int price;
// };

typedef struct {
  char model[25];
  int year;
  int price;
}Car;

int main() {
  // Array of structs help organize data
  Car car1 = {"Mustang", 2015, 32000};
  Car car2 = {"Corvette", 2026, 68000};
  Car car3 = {"Challenger", 2024, 80000};
  // printf("%s %d %d", car1.model, car1.price, car1.year);

  Car cars[] = {car1, car2, car3};

  int numOfCars = sizeof(cars) / sizeof(cars[0]);

  for (int i = 0; i < numOfCars; i++) {
    printf("%s %d %d\n", cars[i].model, cars[i].year, cars[i].price);
  }
  
  return 0;
}