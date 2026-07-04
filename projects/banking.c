#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main() {
  int choice = 0;
  float balance = 0.0;
  printf("*** WELCOME TO THE BANK ***");

  do {
    printf("\nSelect an option:\n");
    printf("\n1. Check Balance\n");
    printf("\n2. Deposit Money\n");
    printf("\n3. Withdraw Money\n");
    printf("\n4. Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        checkBalance(balance);
        break;
      case 2:
        balance += deposit();
        break;
      case 3:
        balance -= withdraw(balance);
        break;
      case 4:
        printf("\nThank you for using the bank!\n");
        break;
      default:
        printf("\nInvalid choice! Please select 1 - 4\n");
    }
  } 
  while (choice != 4);

  return 0;
}

void checkBalance(float balance) {
  printf("\nYour current balance is:  $%.2f", balance);
}

float deposit() {
  float amt = 0.0;
  printf("\nEnter amount to deposit: $");
  scanf("%f", &amt);

  if (amt < 0) {
    printf("Invalid amount\n");
    return 0.0;
  } else {
    printf("Successfully deposited $%.2f\n", amt);
    return amt;
  }
}

float withdraw(float balance) {
  float amt = 0.0;
  printf("\nEnter amount to withdraw: $");
  scanf("%f", &amt);

  if (amt < 0) {
    printf("Invalid amount\n");
    return 0.0;
  } else if (amt > balance) {
      printf("Insufficient funds. Your balance is $%.2f\n", balance);
      return 0.0;
  } else {
    printf("Successfully withdrew $%.2f\n", amt);
    return amt;
  }
}