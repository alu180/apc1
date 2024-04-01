#include<stdio.h>
#include<math.h>

int main(){
  float b;
  float a;
  float c;
  float delta;
  double raiz;
  double bhaskara_positiva;
  double bhaskara_negativa;

  
  
  
  printf("insira o valor de a: ");
  int deu_certo = scanf("%f", &a);

  printf("insira o valor de b: ");
  deu_certo = scanf("%f", &b);
  
  printf("insira o valor de c: ");
  deu_certo = scanf("%f", &c);

  delta = pow (b,2) - 4 * a * c;

  printf("o valor de delta é: %f\n", delta);

  raiz = sqrt(delta);
  printf("o valor da raiz de delta é: %f\n", raiz);

  bhaskara_positiva = (-b + raiz) / 2 * a;
  printf("o valor de bhaskara é: %f\n", bhaskara_positiva);

  bhaskara_negativa = (-b - raiz) / 2 * a;
  printf( "o valor de bhaskara é: %f\n", bhaskara_negativa);












  return 0;
}