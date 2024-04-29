#include<stdio.h>


int main(){
  int opcao;

  printf("MENU PRINCIPAL\n");
  printf("1 - Consultar saldo\n");
  printf("2 - recarregar saldo\n");
  printf("3 - ligacoes recebidas\n");
  printf("4 - ligacoes feitas\n");
  printf("0 - sair\n");
  printf("entre com uma opcao:\n");
  int deu_certo = scanf("%i", &opcao);

  switch(opcao){
    case 1:printf("seu saldo e de R$ 10.00\n");
      break;
    case 2:{
      float valor;
      printf("entre com o valor da recarga:\n");
      deu_certo = scanf ("%f", &valor);
      break; 
          }
    case 3:{printf("as ultimas ligacoes recebidas\n");
            printf("9999-9999\n");
            printf("8888-8888\n");
            printf("7777-7777\n");
      break;
           }
    case 4:{printf("as 5 ultimas ligacoes feitas\n");
            printf("9999-9999\n");
            printf("8888-8888\n");
            printf("7777-7777\n");
      break;
           }
    case 0:{printf("ate logo\n");
          break;
          default:
          printf("opcao invalida.tente novamente\n");
      
           }




    
  }
    
  





  return 0;
}