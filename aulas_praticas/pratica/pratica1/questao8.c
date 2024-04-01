#include<stdio.h>
#include<math.h>

int main(){
  int segundos;
  int minutos;
  int horas;


  printf("insira o valor em segundos: ");
  int deu_certo = scanf("%i", &segundos);

  horas = segundos / 3600;
  int resto_de_horas = segundos % 3600;
  minutos = resto_de_horas / 60;
  int resto_de_minutos = resto_de_horas % 60;

  printf("%i segundos corresponde a: %i horas %i minutos %i segundos \n" , segundos, horas, minutos, resto_de_minutos);






  return 0;
}