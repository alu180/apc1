#include <stdio.h> 

int main(){
  float A1;
  float A2;
  

  printf("entre com o valor da A1: ");
  int deu_certo = scanf("%f", &A1);

  printf("entre com o valor da A2: ");
  deu_certo = scanf("%f", &A2);

  float media = (0.4 * A1) + (0.6 * A2);

  
  printf("A media é %f\n", media);







  return 0;
}