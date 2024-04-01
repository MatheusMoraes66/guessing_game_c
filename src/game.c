#include "../includes/game.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
// Game
int secretNumber = 0, choice = 0, kick = 0;
// User
int pointsDeducted = 0, userPoint = 1000;

void run(int *numberOfAttempts, int *youWon) {

  kickNumber();

  int hitTheKick = (secretNumber == kick);
  int secretIsBigger = (secretNumber > kick);
  int secretIsSmall = (secretNumber < kick);

  if (hitTheKick) {
    (*youWon) = 1;
  } else {
    userPoint = abs(pointsDeducted - userPoint);
    (*numberOfAttempts)--;
  }

  if (secretIsBigger) {
    drawingMessage("O valor do valor é menor que o numero secreto.");
  }
  if (secretIsSmall) {
    drawingMessage("O valor do valor é maior que o numero secreto.");
  }
}

void generateRandomicNumber() {
  int seconds = time(0);
  srand(seconds);

  int randonNumber = rand();

  secretNumber = randonNumber % 100;
}

void kickNumber() {
  int valid = 0;
  do {
    drawingQuestion("Digite um numero:", "");
    kick = inputNumber();

    if (kick < 0) {
      valid = 0;
    } else {
      valid = 1;
    }

  } while (!valid);
}

void choiceLevel(int *numberOfAttempts) {
  int valid = 1;
  do {
    drawingQuestion("Escolha o nivel do jogo? ",
                    "(1) Easy | (2) Medium | (3) Hard");
    int choice = inputNumber();

    if (choice < 1 || choice > 3) {
      drawingMessage(ERR_INVALID_NUMBER);
      valid = 0;
    } else {
      valid = 1;
    }

    switch (choice) {
    case 1:
      (*numberOfAttempts) = 20;
      pointsDeducted = EASY;
      break;
    case 2:
      (*numberOfAttempts) = 10;
      pointsDeducted = MEDIUM;
      break;
    default:
      (*numberOfAttempts) = 5;
      pointsDeducted = HARD;
      break;
    }
  } while (!valid);
}

int inputNumber() {
  char txt[4];
  int number, validNumber = 0;

  do {
    fgets(txt, sizeof(txt), stdin);

    if (txt[strlen(txt) - 1] == '\n') {
      txt[strlen(txt) - 1] = '\0';
    }

    if (sscanf(txt, "%d", &number) != 1) {
      drawingMessage(ERR_INVALID_INPUT);
    } else {
      validNumber = 1;
    }
  } while (!validNumber);
  return number;
}
