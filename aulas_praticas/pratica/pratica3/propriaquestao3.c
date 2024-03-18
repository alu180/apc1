#include <stdio.h> 

int main(){
  float r;
  float pi = (3.1416);


  printf("indique o raio do circulo: ");
  int deu_certo = scanf("%f", &r);

  float perimetro = (2) * pi * r;

  printf("o perimetro da pizza eh %f\n", perimetro);

    

    

  return 0;
}