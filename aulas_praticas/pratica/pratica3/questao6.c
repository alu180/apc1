#include <stdio.h>
#include <math.h>


int main(){
  int numero;

  printf("entre com um numero entre 1 e 100: ");
  int deu_certo = scanf("%i", &numero);

  if(deu_certo && numero > 0 && numero < 101) {
   /* for (int i = 1; i < 101; i++){
      if (i % numero == 0){
        printf("%i,\n", i);
      }
    }*/
    for (int i = numero; i < 101; i= i +numero){
      printf("%i, ", i);
    }
    printf("\n");
  } else {
    printf ("numero invalido. tente novamente.\n");
  }












  return 0;
}