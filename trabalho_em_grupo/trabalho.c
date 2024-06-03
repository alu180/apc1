
#include <stdio.h>
#include <stdlib.h>

int main() {
  int l, c, horizontal, vertical, player, vitoria, acoes, escolhas;
  char jogo[3][3];

  escolhas = 1;

  while (escolhas == 1) {
    player = 1;
    vitoria = 0;
    acoes = 0;

    for (l = 0; l < 3; l++) {
      for (c = 0; c < 3; c++) {
        jogo[l][c] = ' ';
      }
    }

    while (vitoria == 0 && acoes < 9) {
      printf("\n\n\t 0   1   2\n\n");
      for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
          if (c == 0)
            printf("\t");
          printf(" %c ", jogo[l][c]);
          if (c < 2)
            printf("|");
          if (c == 2)
            printf("  %d", l);
        }
        if (l < 2)
          printf("\n\t-----------");
        printf("\n");
      }

      int entrada_valida = 0;
      while (!entrada_valida) {
        printf("\nPLAYER 1 = 0\nPLAYER 2 = X\n");
        printf("PLAYER %d: Digite a coluna: ", player);
        if (scanf("%d", &vertical) != 1) {
          while (getchar() != '\n')
            ;
          printf("Entrada inválida! Digite um número inteiro.\n");
          vertical = -1; 
        }
        printf("PLAYER %d: Digite a linha: ", player);
        if (scanf("%d", &horizontal) != 1) {
          while (getchar() != '\n')
            ;
          printf("Entrada inválida! Digite um número inteiro.\n");
          horizontal = -1; 
        }

        if (horizontal < 0 || horizontal > 2 || vertical < 0 || vertical > 2) {
          printf("Valores fora do permitido! Digite valores entre 0 e 2.\n");
        } else if (jogo[horizontal][vertical] != ' ') {
          printf("Posição já ocupada! Escolha outra posição.\n");
        } else {
          entrada_valida = 1;
        }
      }

      if (player == 1) {
        jogo[horizontal][vertical] = '0';
        player = 2;
      } else {
        jogo[horizontal][vertical] = 'X';
        player = 1;
      }
      acoes++;

      for (l = 0; l < 3; l++) {
        if (jogo[l][0] == jogo[l][1] && jogo[l][1] == jogo[l][2] &&
            jogo[l][0] != ' ') {
          vitoria = 1;
        }
      }

      for (c = 0; c < 3; c++) {
        if (jogo[0][c] == jogo[1][c] && jogo[1][c] == jogo[2][c] &&
            jogo[0][c] != ' ') {
          vitoria = 1;
        }
      }

      if (jogo[0][0] == jogo[1][1] && jogo[1][1] == jogo[2][2] &&
          jogo[0][0] != ' ') {
        vitoria = 1;
      }

      if (jogo[0][2] == jogo[1][1] && jogo[1][1] == jogo[2][0] &&
          jogo[0][2] != ' ') {
        vitoria = 1;
      }

      if (vitoria == 1) {
        printf("\nParabéns! O player %d venceu!\n", player == 1 ? 2 : 1);
      }
    }

    printf("\n\n\t 0   1   2\n\n");
    for (l = 0; l < 3; l++) {
      for (c = 0; c < 3; c++) {
        if (c == 0)
          printf("\t");
        printf(" %c ", jogo[l][c]);
        if (c < 2)
          printf("|");
        if (c == 2)
          printf("  %d", l);
      }
      if (l < 2)
        printf("\n\t-----------");
      printf("\n");
    }

    if (vitoria == 0) {
      printf("\nO jogo finalizou sem vencedor!\n");
    }

    printf("\nDigite 1 para jogar novamente: ");
    if (scanf("%d", &escolhas) != 1) {
      while (getchar() != '\n')
        ;
      escolhas? = 0;
    }
  }

  return 0;
}
