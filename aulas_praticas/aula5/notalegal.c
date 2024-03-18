#include <stdio.h>


int main() {
  char nome [31] = "";
  int quantidade = 0;
  float valor = 0.0f;


  printf("entre com o nome do produto: ");
  int deu_certo = scanf("%[^\n]s", nome);

  printf("entre com a quantidade do produto: ");
  deu_certo = scanf("%i", &quantidade);

  printf("entre com o valor do produto: ");
  deu_certo = scanf("%f", &valor);


  printf("---------------------------------------\n");
   printf("            NOTA LEGAL\n");
   printf("---------------------------------------\n");
   printf("ITEM                QTD         PREÇO\n"); 
  printf("%12s %9i %14.2f\n", nome, quantidade, valor);

  return 0;
}