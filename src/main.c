#include "../includes/game.h"

int main() {
  int numberOfAttempts, youWon = 0;

  generateRandomicNumber();
  choiceLevel(&numberOfAttempts);

  do {

    run(&numberOfAttempts, &youWon);

  } while (numberOfAttempts > 0 && !youWon);

  if (youWon == 1) {
    drawingWinner();
  }
  return 0;
}
