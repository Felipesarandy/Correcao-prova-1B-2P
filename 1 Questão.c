//QUESTÃO 1

#include <stdio.h>
#define SM 1402.25

int main(void) {
  int opcao, T = 0;
  int E = 0, I = 0, tempo;
  float SI = 0, SE = 0, salario;

  do{
    printf("MENU DE OPÇÕES\n");
    printf("1-Cadastrar entrevistado\n");
    printf("0-Sair\n");
    printf("Escolha uma opção: ");
    scanf("%i", &opcao);

    if(opcao == 0)
      printf("Fim do programa\n");
    else if(opcao != 1)
      printf("Opção inválida\n");
    else{
      printf("Dados do Trabalhador %i\n", T + 1);
      printf("Salário R$: ");
      scanf("%f", &salario);
      printf("Tempo de experiência (anos): ");
      scanf("%i", &tempo);

      if(salario < SM || tempo < 1)
        printf("ERRRO: Condições inválidas\n");
      else{
        T++;
        if(tempo <= 5){
          SI += salario;
          I++;
        }
        else{
          SE += salario;
          E++;
        }
      }
    }
  }while (opcao != 0);
  printf("Média salarial dos trabalhadores inexperientes: R$ %.2f\n", SI/I);
  printf("Média salarial dos trabalhadores experientes: R$ %.2f\n", SE/E);
  return 0;
}