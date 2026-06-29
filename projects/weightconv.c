#include <stdio.h>
#include <stdbool.h>

int main() {

  int conversionChoice = 0;
  float kilos = 0.0;
  float pounds = 0.0;

  printf("Weight Conversion Calculator\n");

  printf("1. Kilograms to Pounds\n");

  printf("2. Pounds to Kilograms\n");

  printf("Enter your choice (1 or 2): ");
  scanf("%d", &conversionChoice);

  if (conversionChoice == 1) {
    printf("Enter the weight in kilograms: ");
    scanf("%f", &kilos);
    pounds = kilos * 2.20462;

    printf("%.2f kilograms is equal to %.2f pounds\n", kilos, pounds);
  } else if (conversionChoice == 2) {
    printf("Enter the weight in pounds: ");
    scanf("%f", &pounds);
    kilos = pounds / 2.20462;

    printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilos);
  } else {
    printf("Invalid choice! Please enter 1 or 2\n");
  }

  return 0;
}