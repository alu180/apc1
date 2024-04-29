#include <stdio.h>
#include <math.h>

int main(){
float valor_bruto;
  float valor_desconto;

  printf("insira o valor:");
  int deu_certo = scanf("%f", &valor_bruto);
  
  if(valor_bruto <= 100.00f){
    float valor_desconto = valor_bruto * 0.01f;
    printf("seu desconto e de %.2f \n" , valor_desconto);
    
  } else if (valor_bruto >= 100.01f <= 500.00f){
    float valor_desconto = valor_bruto * 0.05f;
    printf("seu desconto e de %.2f \n" , valor_desconto);
  } else if (valor_bruto > 500.00f){
    float valor_desconto = valor_bruto * 0.1f;

    printf("seu desconto e de: %.2f \n" , valor_desconto);
  }







  return 0;
}