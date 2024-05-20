#include <stdio.h>

int main() {
  float boletim[10][3];

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 2; j++) {
      printf("entre com a nota %i do aluno %i: ", j + 1, i + 1);
      int deu_certo = scanf("%f", &boletim[i][j]);
    }
    boletim[i][2] = 0.4f * boletim[i][0] + 0.6f * boletim[i][1];
  }
  printf("\nBOLETIM\n");
  printf("nota1 nota2 media\n");
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%5.1f ", boletim[i][j]);
    }
    printf("\n");
  }

  //   | 0 | 1 | 2 |
  // 0 |   |   |   |
  // 1 |   |   |   |
  // 2 |   |   |   |
  // 3 |   |   |   |
  // 4 |   |   |   |
  // 5 |   |   |   |
  // 6 |   |   |   |
  // 7 |   |   |   |
  // 8 |   |   |   |
  // 9 |   |   |   |
  return 0;
}