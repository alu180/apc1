#include <stdio.h>


int main(){

  float base;
  float altura;
  base = 2.0f;  //2.0f isso float, 2.0 isso double
  altura = 3.0f;

  printf("entre com o valor da base: ");
  int deu_certo = scanf("%f", &base);

  printf("entre com o valor da altura: ");
   deu_certo = scanf("%f", &altura);

  float area = base * altura /2;

   printf("A area do triangulo eh %f\n", area);


  return 0;
}