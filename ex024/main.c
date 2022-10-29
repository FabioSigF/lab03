#include <stdio.h>

int main()
{
  /*24. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um programa em que o usuário entre com o valor e o estado destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrar uma mensagem de erro.
   */
  int est;
  float valor;
  printf("Digite qual o seu estado:\n  1 - Minas Gerais\n  2 - Sao Paulo\n  3 - Rio de Janeiro\n  4 - Mato Grosso do Sul\nR=");
  scanf("%d", &est);

  if ((est < 1) || (est > 4))
  {
    printf("O estado digitado eh invalido. FIM DO PROGRAMA!");
  }
  else
  {
    printf("Qual o valor do produto? ");
    scanf("%f", &valor);

    switch (est)
    {
    case 1:
      valor *= 1.07;
      break;
    case 2:
      valor *= 1.12;
      break;
    case 3:
      valor *= 1.15;
      break;
    case 4:
      valor *= 1.08;
      break;

    default:
      printf("O estado digitado eh invalido. FIM DO PROGRAMA!");
      break;
    }
    printf("O preco final do produto acrescido do imposto do estado em que ele sera vendido eh %.2f.", valor);
  }
}