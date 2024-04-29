#include<stdio.h>
#include<math.h>

int main(){
  int nota;


  printf("entre com uma nota de 1 a 5: ");
  int deu_certo = scanf("%i", &nota);
  
  if (nota == 1) {
    printf("ruim\n");

  } else if (nota == 2){
    printf("insuficiente\n");
  } else if (nota == 3){
    printf("suficiente\n");
  } else if (nota == 4){
    printf("boa\n");
  } else if (nota == 5){
    printf("otimo\n");
  }else {
    printf("nota invalida. tente novamente! \n");
  }












  return 0;
}