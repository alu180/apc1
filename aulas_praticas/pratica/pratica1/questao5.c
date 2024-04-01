#include <stdio.h> 

int main(){
  float GB;

  printf("indique o quantos Gigabytes: ");
  int deu_certo = scanf("%f", &GB);

  float bytes = GB * 1024 * 1024 * 1024;




  printf("essa quantia eh de %f bytes \n", bytes);



  









  return 0;

}