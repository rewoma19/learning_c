#include <stdio.h>

int main() {

  // Format specifiers are special tokens that begin with a % symbol, followed by a character that specifies the data type and optional modifiers like width, precision, flags, etc. They control how data is displayed or interpreted

  int age = 25;
  float price = 19.99;
  double pi = 3.1415926535;
  char currency = '$';
  char name[] = "Raphael";

  printf("%d\n", age);
  printf("%f\n", price);
  // lf => long float (double)
  printf("%lf\n", pi);
  printf("%c\n", currency);
  printf("%s\n", name);

  // width
  int num1 = 1;
  int num2 = 10;
  int num3 = 100;

  // The number before % in this case would sort of represent space BEFORE the value
  // A negative number would have the space AFTER the value
  // Preceding the numbers with a 0 would fill the space with 0s
  // Explicitly having a + sign before the value would simply have + coming before the value when displayed
  printf("%d\n", num1);
  printf("%2d\n", num2);
  printf("%3d\n", num3);

  // Precision
  float price1 = 19.99;
  float price2 = 1.50;
  float price3 = -100.00;

  // A . then number represents the number of decimal places
  printf("%f\n", price1);
  printf("%f\n", price2);
  printf("%f\n", price3);

  return 0;
}