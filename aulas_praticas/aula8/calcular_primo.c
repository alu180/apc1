#include <stdio.h>
#include <math.h>


int main(){
  int numero;
  int qtd_multiplos = 0;

  printf("entre com um numero inteiro:");
  int deu_certo = scanf("%i", &numero);

  if(deu_certo && numero >0){
    for (int i = 1; i <= numero; i++) {
      if (numero % i == 0) {
        qtd_multiplos++;
      }
    }
    if (qtd_multiplos == 2){
      printf("o numero %i e primo!\n", numero);
    }else {
      printf("o numero %i nao e primo!\n", numero);
    }
    
  }else{
    printf("numero invalido. tente novamente\n");
  }



  return 0;
}