#include <stdio.h>
#include <math.h>

int main(){
float valor_bruto;

  printf("insira no valor\n");
  int deu_certo = scanf("%f", &valor_bruto);
  
  if(valor_bruto <= 100.00){

    float valor_final = valor_bruto * 0.01);
    printf("seu desconto e de 1%");
    
  } else if (valor_bruto >= 100.01 <= 500.00){


    float valor_final = valor_bruto * 0.05);
    printf("seu desconto e de 5%");
  } else if (valor_bruto > 500.00){

    float valor_final = valor_bruto * 0.1);
    printf("seu desconto e de 10%");
  }







  return 0;
}