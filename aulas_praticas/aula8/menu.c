#include <stdio.h>
#include <stdlib.h>

int main() {
  char opcao = '\n';

  while (opcao != '0') {
    int deu_certo = system("clear");
    printf("MEU JOGO\n");
    printf("1 - iniciar jogo\n");
    printf("2 - ver pontuaçao\n");
    printf("3 - ajuda\n");
    printf("0 - sair\n");
    printf("entre com uma opçao => ");
    deu_certo = scanf("%c", &opcao);
    while (getchar() != '\n')
      ; // limpa o buffer

    switch (opcao) {
    case '1': {
      break;
    }
    case '2': {
      printf("nome\tpontuaçao\n");
      printf("jose\t1000\n");
      printf("maria\t500\n");
      printf("pedro\t200\n");
      printf("pressione enter para continuar...");
      getchar();
      break;
    }
    case '3': {
      break;
    }
    case '0':
      printf("ate logo!\n");
      break;
    default:
      printf("opçao invalida! pressione enter para continuar\n");
      getchar();
    }
  }

  return 0;
}