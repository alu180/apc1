#include<stdio.h>

int main() {
   printf("--------------------------------------\n");
   printf("            NOTA LEGAL\n");
   printf("---------------------------------------\n");
   printf("ITEM                QTD         PREÇO\n"); 

  
  char item [31] ="Banana Prata";
  int QTD =1;
  float preço = 15.0f;

  printf("%12s %9i %14.2f\n", item, QTD, preço);

  char item2 [31] ="Laranja bahia";
  QTD =10;
  preço = 20.0f;

  printf("%12s %9i %13.2f\n", item2, QTD, preço);

  char item3 [31] ="maça fuji";
  QTD =15;
  preço = 2.0f;

  printf("%9s %13i %13.2f\n", item3, QTD, preço);

  printf("---------------------------------------\n");
  printf("TOTAL                    %13.2f\n",245.0f);
  


  
   //printf("Banana Prata         1           15\n");
   //printf("Laranja bahia        10          20\n");
   //printf("maça fuji            15           2\n"); 
  
  return 0;
}

