#include<stdio.h>
#include<math.h>

int main (){

int numero1;

  printf("entre com o numero 1: ");
  int deu_certo = scanf("%i", &numero1);


  int maior_que_zero_menor_que_dez = 0 < numero1 && numero1< 10;
  printf("o numero 1 e maior que zero e menor que dez? %i\n", maior_que_zero_menor_que_dez);


  int menor_que_zero_maior_que_dez = numero1 < 0 || numero1> 10;
  printf("o numero 1 e menor que zero e maior que dez? %i\n", menor_que_zero_maior_que_dez);

  int nao_e_maior_que_zero = !(numero1 > 0);

  printf("o numero 1 nao e maior que zero? %i\n", nao_e_maior_que_zero);

  return 0;

 }