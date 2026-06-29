#include <stdio.h>
#include <string.h>

int main() {

  char item[50] = "";
  float price = 0.0f; // f at the end indicates it should be a floating point number
  int quantity = 0;
  char currency = '$';
  float total = 0.0f;

  printf("What item would you like to buy?");
  fgets(item, sizeof(item), stdin);
  // \0 is a null terminator character
  item[strlen(item) - 1] = '\0';

  printf("What is the price for each?");
  scanf(" %f", &price);

  printf("How many would you like?; ");
  scanf(" %d", &quantity);

  total = price * quantity;
  printf("\nYou have bought %d %s/s\n", quantity, item);
  printf("The total is %c%.2f", currency, total);

  return 0;
}