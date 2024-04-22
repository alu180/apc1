#include <stdio.h>
#include <math.h>


int main(){

  int numero;


  printf("de um numero inteiro: ");
  int deu_certo = scanf("%i", &numero);

  if(deu_certo){
  if (numero % 2 == 0){
    printf("o numero %i e par\n", numero);
    } else {
    printf("o numero %i e impar\n", numero);
  } 
   }else {
    printf("o numero e invalido!\n");
  }
  










  return 0;
}