#include<stdio.h>
#include<math.h>

int main() {
  int numero1;
  int numero2;

  printf("entre com o numero 1: ");
  int deu_certo = scanf("%i", &numero1);


  printf("entre com o numero 2: ");
  deu_certo = scanf("%i", &numero2);

  
  int resultado = numero1 + numero2;
  printf("A soma é %i\n", resultado);


  resultado = numero1 - numero2;
  printf("A subtração é %i\n", resultado);

  resultado = numero1 * numero2;
  printf("A multiplicação é %i\n", resultado);
  
  float resultado2 = numero1 / (numero2 * 1.0); //conversao implicita
  printf("A divisão é %.1f\n", resultado2);
  
  resultado = numero1 % numero2;
  printf("O resto da divisão é %i\n", resultado);

  //numero1 = numero1 + 1; //aumenta em 1
  //numero1++; //incremento
  //++numero1;

  printf("o incremento do numero1 é %i\n" ,numero1++);
  printf("o incremento do numero1 é %i\n" ,++numero1);

  //numero1 = numero1 - 1; //diminui em 1
  //numero1--; //decremento
  //--numero1;

  printf("o decremento do numero1 é %i\n" ,numero1--);
  printf("o decremento do numero1 é %i\n" ,--numero1);


  double raiz  = sqrt(numero1);
  printf("a raiz quadrada do numero1 é %.2f\n", raiz);

  
  double potencia = pow(numero1, 3); //numero1 elevado a 3
  printf("o numero1 elevado a 3 do numero1 é %.2f\n", potencia);

  
  double logaritmo_base2 = log2(numero1);
  printf("o logaritmo na base 2 do numero1 é %.2f\n", logaritmo_base2);
    

  
  double seno = sin(numero1 * (M_PI / 180) );
  printf("o seno do numero1 é %.2f\n", seno);
  



  
  return 0;
}