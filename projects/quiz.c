#include <stdio.h>
#include <ctype.h> // header file that gives us toupper function

int main() {
  char questions[][100] = {
    "What is the largest planet in the solar system?",
    "What is the hottest planet?",
    "What planet has the most moons?",
    "Is the Earth flat?"
  };

  char options[][100] = {
    "A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune",
    "A. Mercury\nB. Venus\nC. Earth\nD. Mars",
    "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn",
    "A. Yes\nB. No\nC. Maybe\nD. Sometimes"
  };

  char ansKey[] = {'A', 'B', 'D', 'B'};

  int numOfQuestions = sizeof(questions) / sizeof(questions[0]);
  char guess = '\0';
  int score = 0;

  printf("*** QUIZ GAME ***");

  for (int i = 0; i < numOfQuestions; i++) {
    printf("\n%s\n", questions[i]);
    printf("\n%s\n", options[i]);
    printf("\nEnter your choice: ");
    scanf(" %c", &guess);

    guess = toupper(guess); // converts to upper character case

    if (guess == ansKey[i]) {
      printf("CORRECT!\n");
      score++;
    } 
    else {
      printf("WRONG!\n");
    }
  }

  printf("\nYour score is %d out of %d possible points\n", score, numOfQuestions);

  return 0;
}