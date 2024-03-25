#include<stdio.h>
#include<math.h>

int main(){
  float angulo;
  float distancia;
  double altura;
  double seno;

  printf("insira o angulo: ");
  int deu_certo = scanf("%f", &angulo);

  printf("insira a distancia percorrida: ");
  deu_certo = scanf("%f", &distancia);

  seno = sin(angulo);
  altura = distancia * seno;

  printf("o aviao chegou a %f de altura \n", altura);

  
  
  









  return 0;
}