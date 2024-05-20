#include<stdio.h>

#define LIMITE 10
int main (){
  int numeros[LIMITE];

  for (int i = 0; i < LIMITE; i++){
    printf("entre com o %io numero: ", i+1);
    int deu_certo = scanf("%i", &numeros[i]);
  }

  int numero;
  printf("entre com o numero a ser procurado: ");
  int deu_certo = scanf("%i", &numero);
  int achei =-1;

  for (int i = 0;i < LIMITE; i++ ) {
    if (numero == numeros[i]) {
      achei = i;
      break;
    }
  }
  if (achei < 0) {
    printf("numero %i nao foi encontrado\n", numero);
  } else{
    printf("achei o numero %i na posicao %i\n", numero, achei);
  }



  return 0;
}