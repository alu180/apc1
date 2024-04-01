#include<stdio.h>
#include<math.h> 

int main() {
  int numero1;
   

  printf("insira um numero inteiro para decompor: ");
  int deu_certo = scanf("%i", &numero1);


  int milhares = numero1/1000;
  int centenas = numero1%1000 /100;
  int dezenas = numero1%1000 %100 /10;
  int unidades = numero1%1000 %100 %10;

  printf("o numero %i e decomposto em %i unidades %i dezenas %i centenas e %i milhares\n", numero1, unidades, dezenas, centenas, milhares);
  

  return 0;
}