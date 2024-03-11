#include<stdio.h>

#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RED     "\x1b[31m"

int main(){
  
    float valor_hora_trabalhada = 150.0f;
    int total_horas_trabalhadas = 200;

  const float valor_IR = 0.25f;
  const float valor_INSS = 0.11f;

  float salario_bruto = valor_hora_trabalhada * total_horas_trabalhadas;

  float imposto_renda = salario_bruto * valor_IR; 
  
  //\\ imposto de renda multiplicado por imposto de renda = salario bruto
    
  
  // valor imposto de renda multiplicado por inss = salario bruto
  
  float imposto_INSS = salario_bruto * valor_INSS;
  
  // valor inss multiplicado por inss = salario bruto
  
  
  

  float salario_liquido = salario_bruto - imposto_renda - imposto_INSS;

  printf("------------\n");
  printf("CONTRACHEQUE\n");
  printf("------------\x1b[32m\n");
  printf("salario_bruto...: %8.2f\n", salario_bruto);
  printf("valor_renda.....: %8.2f\x1b[31m\n", imposto_renda);
  printf("valor_INSS......: %8.2f\x1b[32m\n", imposto_INSS);
  printf("salario_liquido.: %8.2f\n", salario_liquido);




  return 0;
}