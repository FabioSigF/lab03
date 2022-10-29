#include <stdio.h>

int main()
{
  /* Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida. Escreva uma mensagem de erro se a opção for inválida.
  Escolha a opção:
  1- Soma de 2 números.
  2- Diferença entre 2 números (maior pelo menor).
  3- Produto entre 2 números.
  4- Divisão entre 2 números (o denominador não pode ser zero).*/
  int op;
  float n1, n2, alt, calc;
  printf("Escolha a opcao:\n  1- Soma de 2 numeros\n  2- Diferenca entre 2 numeros (maior pelo menor)\n  3- Produto entre 2 numeros\n  4- Divisao entre 2 numeros (o denominador nao pode ser zero)\n  R= ");
  scanf("%d", &op);
  if ((op < 1) || (op > 4))
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
      printf("A soma entre %.1f e %.1f eh: %.1f", n1, n2, calc);
      break;
    case 2:
      if (n1 < n2)
      {
        alt = n1;
        n1 = n2;
        n2 = alt;
      }
      calc = n1 - n2;
      printf("A diferenca entre %.1f e %.1f eh: %.1f", n1, n2, calc);
      break;

    case 3:
      calc = n1 * n2;
      printf("O produto entre %.1f e %.1f eh: %.1f", n1, n2, calc);
      break;
    case 4:
      if (n2 == 0)
      {
        printf("Denominador invalido.");
      }
      else
      {
        calc = n1 / n2;
        printf("O produto entre %.1f e %.1f eh: %.1f", n1, n2, calc);
      }
      break;

    default:
      printf("A opcao escolhida eh invalida. FIM DO PROGRAMA.");
      break;
    }
  }
  return 0;
}