#include<stdio.h>
#include<math.h> 

int main(){

  int anos;
  int meses;
  int dias;

  printf("insira quantos anos voce tem: ");
  int deu_certo = scanf("%i", &anos);
  printf("insira quantos meses voce tem: ");
  deu_certo = scanf("%i", &meses);
  printf("insira quantos dias de vida voce tem: ");
  deu_certo = scanf("%i", &dias);

  int total_dias = (anos * 365) + (meses * 30) + dias;

  printf("voce tem %i dias de vida\n", total_dias);




  return 0;
}