#include <stdio.h>

int main (){
  int numero;
  int numero_valido = 0;

  while (numero_valido == 0){

  printf("Entre com um numero entre 1 e 10: ");
  int deu_certo = scanf("%i", &numero);


  numero_valido = deu_certo && (numero >= 1 && numero <= 10);
    if (numero_valido == 0) {
      printf ("algo deu errado!\n");
      getchar();//Para limpar o buffer
   } 
  }
    printf("deu certo!\n");

  return 0;
}