#include <stdio.h>
/*Faça um programa que mostre ao usuário um menu com 4 opções de operações
matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa
então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo.*/
int main()
{
  int op;
  float n1, n2, calc;
  printf("Escolha a operacao:\n  [1] Soma\n  [2] Subtracao\n  [3] Multiplicacao\n  [4] Divisao\nR= ");
  scanf("%d", &op);

  if (op < 0 || op > 4)
  {
    printf("Opcao invalida. FIM DO PROGRAMA!");
  }
  else
  {
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    switch (op)
    {
    case 1:
      calc = n1 + n2;
      printf("Operacao de Soma!");
      break;
    case 2:
      calc = n1 - n2;
      printf("Operacao de Subtracao!");
      break;
    case 3:
      calc = n1 * n2;
      printf("Operacao de Multiplicacao!");
      break;
    case 4:
      calc = n1 / n2;
      printf("Operacao de Divisao!");
      break;
    }
    printf(" O resultado da operacao entre %.2f e %.2f foi: %.2f.", n1, n2, calc);
  }
  return 0;
}