#ifndef GAME_H
#define GAME_H

#include "defines.h"
#include "display.h"
#include "error_messages.h"

void run(int *numberOfAttempts, int *youWon);
int inputNumber();
void generateRandomicNumber();
void choiceLevel(int *numberOfAttempts);
void kickNumber();
#endif
