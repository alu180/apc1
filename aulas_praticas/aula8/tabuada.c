#include <stdio.h>


int main() {
    int numero;

  printf("entre com um numero de 1 a 10:");
  int deu_certo = scanf("%i", &numero);
  if(deu_certo && numero > 0 && numero < 11) {
    printf("a tabuada de %i \n", numero);
    for (int i= 1; i <= 10; i++){
      printf("%i x %i = %i\n", i, numero, i * numero);
    }
    printf("fim da tabuada\n");


    
  }
  printf("a tabuada de %i\n", numero );









  return 0;
}