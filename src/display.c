#include "../includes/display.h"
#include <stdio.h>
#include <string.h>

void drawingWelcome() {
  printf("\n");
  printf("+--------------------------------------------------------------------"
         "---+ \n");
  printf("|    .------------.                                                  "
         "   | \n");
  printf("|    |.-----------.|                                                 "
         "   | \n");
  printf("|    ||>run#      ||                                                 "
         "   | \n");
  printf("|    ||           ||                      BEM VINDO                  "
         "   | \n");
  printf("|    |\"-----------'|                [JOGO DA ADIVINHAÇÃO]           "
         "    | "
         "\n");
  printf("|  .-^-------------^-.                                               "
         "   | \n");
  printf("|  | ---~ KEYTECH ~--|                                               "
         "   | \n");
  printf("|  \"-----------------'                                              "
         "    | \n");
  printf("+--------------------------------------------------------------------"
         "---+ \n");
  printf("\n");
}

void drawingMessage(char question[MAX_LENGTH]) {
  int questionLength = strlen(question);
  int paddingLength = MAX_LENGTH - questionLength;
  printf("\n");
  printf("|///////////////////////////////////////////////////////////////"
         "//////"
         "|/|\n");
  printf("| %s", question);
  for (int i = 0; i < paddingLength; i++) {
    printf(" ");
  }
  printf(" |\n");
  printf("|///////////////////////////////////////////////////////////////"
         "//////"
         "|/|\n");
  printf("\n");
}

void drawingQuestion(char message[MAX_LENGTH], char tip[MAX_LENGTH]) {
  int messageLength = strlen(message);
  int tipLength = strlen(tip);
  int paddingTipLength = MAX_LENGTH - tipLength;
  int paddingMessageLength = MAX_LENGTH - messageLength;
  printf("__________________________________________________________________"
         "_______\n");
  printf("|[] Jogo Adivinha                                                 "
         "|F]|!\"| \n");
  printf("|"
         "\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\""
         "\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\""
         "\"\"\"|\"| \n");
  printf("| %s", message);
  for (int i = 0; i < paddingMessageLength; i++) {
    printf(" ");
  }
  printf("|\n");
  printf("| %s", tip);
  for (int i = 0; i < paddingTipLength; i++) {
    printf(" ");
  }
  printf("|\n");
  printf("|_________________________________________________________________"
         "____|/| \n");
  printf("> ");
}

void drawingWinner() {
  printf("\n");
  printf("+--------------------------------------------------------------------"
         "---+\n");
  printf("|   _______                                                          "
         "   |\n");
  printf("|  |       |                                                         "
         "   |\n");
  printf("| (|  WIN  |)                     PARABENS                           "
         "   |\n");
  printf("|  |       |                     VOCE GANHOU                         "
         "   |\n");
  printf("|   \\     /                                                         "
         "    |\n");
  printf("|    `---'                                                           "
         "   |\n");
  printf("|    _|_|_                                                           "
         "   |\n");
  printf("+--------------------------------------------------------------------"
         "---+\n");
}
