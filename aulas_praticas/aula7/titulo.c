#include<stdio.h>

int main(){
  int idade;



  printf("insira a sua idade: ");
  int deu_certo = scanf("%i", &idade);

  
  if (idade < 16) {
    printf("ainda nao pode votar\n");
  } else if (idade >=18 && idade <= 70) {
    printf("obrigatorio votar\n");
  }else if (idade >= 16 && idade < 18 || idade > 70){
    
    printf("votar e opcional\n");
  }
  












  return 0;
}