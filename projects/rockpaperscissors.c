#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main() {
  srand(time(NULL)); // current time in seconds as seed to generate random numbers
  printf("ROCK PAPER SCISSORS\n");

  int userChoice = getUserChoice();
  int computerChoice = getComputerChoice();

  char userChoiceStr[30] = "";
  char computerChoiceStr[30] = "";

  switch (userChoice) {
    case 1:
      strcpy(userChoiceStr, "ROCK");
      break;
    case 2:
      strcpy(userChoiceStr, "PAPER");
      break;
    case 3:
      strcpy(userChoiceStr, "SCISSORS");
      break;
  }

  switch (computerChoice) {
    case 1:
      strcpy(computerChoiceStr, "ROCK");
      break;
    case 2:
      strcpy(computerChoiceStr, "PAPER");
      break;
    case 3:
      strcpy(computerChoiceStr, "SCISSORS");
      break;
  }

  printf("You chose %s\n", userChoiceStr);
  printf("Computer chose %s\n", computerChoiceStr);
  
  checkWinner(userChoice, computerChoice);
  
  return 0;
}

int getComputerChoice() {
  return (rand() % 3) + 1; // between 0 and 2, then + 1 to get random num from 1 to 3
}

int getUserChoice() {
  int choice = 0;

  do {
    printf("Choose an option\n");
    printf("1. ROCK\n");
    printf("2. PAPER\n");
    printf("3. SCISSORS\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
  } while (choice < 1 || choice > 3); // user has to make valid choice to end the loop

  return choice;
}

void checkWinner(int userChoice, int computerChoice) {
  bool playerWon = false;
  bool playerTied = false;

  if (computerChoice == 1) {
    if (userChoice == 1) {
      playerTied = true;
    } else if (userChoice == 2) {
        playerWon = true;
    }
  } else if (computerChoice == 2) {
      if (userChoice == 2) {
          playerTied = true;
      } else if (userChoice == 3) {
        playerWon = true;
      }
  } else {
      if (userChoice == 1) {
        playerWon = true;
      }
      else if (userChoice == 3) {
        playerTied = true;
      }
  }

  if (playerWon) {
    printf("You WIN!");
  } else if (playerTied) {
      printf("It's a TIE!");
  } else {
      printf("You LOSE!");
  }
}