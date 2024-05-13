#include <stdio.h>

int main(){
  int numero;
  int maior;
  int menor;
  int numerovalido = 0;

  do {
    printf("insira um numero (0 vai parar o codigo): ");
    int deu_certo = scanf("%i", &numero);
    if (numero == 0){
      break;
    }
    if (maior < numero ){
      maior = numero;  
    }
    if (menor > numero){
      menor = numero;
    }
    
  } while (numero != 0);

  printf ("o maior numero e %i e o menor e %i\n", maior, menor);







  return 0;
}