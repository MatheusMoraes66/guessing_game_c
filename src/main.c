#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Run compiler gcc <name_file> -o programa.out

#define HARD 200
#define MEDIUM 100
#define EASY 50

int main() {
  int seconds = time(0);
  srand(seconds);

  int randonNumber = rand();

  int secretNumber = randonNumber % 100, kick, numberOfAttempts, chooseLevel,
      pointsDeducted, userPoint = 1000;

  printf("\n\n");
  printf("                                                |>>>                 "
         "               \n");
  printf("                                                |                    "
         "               \n");
  printf("                                            _  _|_  _                "
         "               \n");
  printf("                                           |;|_|;|_|;|               "
         "               \n");
  printf("                                           \\.    .  /               "
         "               \n");
  printf("                                            \\:  .  /                "
         "               \n");
  printf("                BEM VINDO                    ||:   |                 "
         "               \n");
  printf("             Jogo de Adivinha                ||:.  |                 "
         "               \n");
  printf("                                             ||:  .|                 "
         "               \n");
  printf("                                             ||:   |       \\,/      "
         "               \n");
  printf("                                             ||: , |            /`\\ "
         "               \n");
  printf("                                             ||:   |                 "
         "               \n");
  printf("                                             ||: . |                 "
         "               \n");
  printf("              __                            _||_   |                 "
         "               \n");
  printf("     ____--`~    '--~~__            __ ----~    ~`---,              "
         "___       ___   \n");
  printf("-~--~                   ~---__ ,--~'                  ~~----_____-~' "
         "`~----~~    -~~\n");
  printf("\n\n");

  while (1) {
    printf(" __________________________________________________________________"
           "_______\n");
    printf(" |[] Jogo Adivinha                                                 "
           "|F]|!\"| \n");
    printf(" |"
           "\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\""
           "\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\""
           "\"\"\"|\"| \n");
    printf(" |Escolha o nivel de dificuldade?                                  "
           "    | | \n");
    printf(" |(1) Hard | (2) Medium | (3) Easy                                 "
           "    | | \n");
    printf(" |_________________________________________________________________"
           "____|/| \n");
    printf(" > ");
    scanf("%d", &chooseLevel);

    if (chooseLevel < 1 || chooseLevel > 3) {
      printf("\n");
      printf(" |///////////////////////////////////////////////////////////////"
             "//////"
             "|/|\n");
      printf(" | Você não pode inserir um numero diferente das opções!       "
             "|ERROU]|!\"| \n");
      printf(" |///////////////////////////////////////////////////////////////"
             "//////"
             "|/|\n");
      printf("\n");
      continue;
    }

    switch (chooseLevel) {
    case 1:
      numberOfAttempts = 5;
      pointsDeducted = HARD;
      break;
    case 2:
      numberOfAttempts = 10;
      pointsDeducted = MEDIUM;
      break;
    default:
      numberOfAttempts = 20;
      pointsDeducted = EASY;
      break;
    }
    printf("\n\n");
    break;
  }

  for (int index = 1; index < numberOfAttempts; index++) {
    printf(" __________________________________________________________________"
           "_______\n");
    printf(" |[] Jogo Adivinha                                                 "
           "|F]|!\"| \n");
    printf(" |"
           "\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\""
           "\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\""
           "\"\"\"|\"| \n");
    printf(" |(%d/%d) Qual é o seu chute?                                      "
           "      | | \n",
           index, numberOfAttempts);
    printf(" |_________________________________________________________________"
           "____|/| \n");
    printf(" > ");
    scanf("%d", &kick);

    if (kick < 0) {
      printf("\n");
      printf(" |///////////////////////////////////////////////////////////////"
             "//////"
             "|/|\n");
      printf(" | Você não pode inserir um numero negativo!                   "
             "|ERROU]|!\"| \n");
      printf(" |///////////////////////////////////////////////////////////////"
             "//////"
             "|/|\n");
      printf("\n");
      continue;
    }

    int hitTheKick = (secretNumber == kick);
    int secretIsBigger = (secretNumber > kick);
    int secretIsSmall = (secretNumber < kick);

    if (hitTheKick) {
      break;
    }

    if (secretIsBigger) {
      printf("\n");
      printf(" |///////////////////////////////////////////////////////////////"
             "//////"
             "|/|\n");
      printf(" | O numero secreto é maior que %d                             "
             "|ERROU]|!\"| \n",
             kick);
      printf(" |///////////////////////////////////////////////////////////////"
             "//////"
             "|/|\n");
      printf("\n");
    }

    if (secretIsSmall) {
      printf("\n");
      printf(" |///////////////////////////////////////////////////////////////"
             "//////"
             "|/|\n");
      printf(" | O numero secreto é menor que %d                             "
             "|ERROU]|!\"| \n",
             kick);
      printf(" |///////////////////////////////////////////////////////////////"
             "//////"
             "|/|\n");
      printf("\n");
    }

    userPoint = abs(pointsDeducted - userPoint);
  }

  printf("            +             /\n");
  printf("\\           |           /\n");
  printf("  \\         |         /\n");
  printf("    \\      / \\      /\n");
  printf("      \\  /____\\  /\n");
  printf("      /  |__|__|  \\                  OBRIGADO POR JOGAR\n");
  printf("    /  |;|     |;|  \\                    Pontos:  %d \n", userPoint);
  printf("  /    \\\\     .  /    \\\n");
  printf("/       ||:  .  |       \\\n");
  printf("        ||:     |         \\\n");
  printf("        ||:.    |           \\\n");
  printf("        ||:    .|\n");
  printf("        ||:   , |         /`\\\n");
  printf("        ||:     |          /`\\\n");
  printf("        ||: _ . |        /`\\\n");
  printf("       _||_| |__|    ____\n");
  printf(
      "  ____~    |_|  |___           __-----~    ~`---,__             ___\n");
  printf("-~                  ~---___,--~'                  ~~----_____-~'\n");
  printf("`~----,____                      -Fim-\n");

  return 0;
}
