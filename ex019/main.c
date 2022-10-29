#include <stdio.h>
/*Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5,
mas, não simultaneamente pelos dois.*/
int main()
{
  int num, calc3, calc5;

  printf("Digite um numero inteiro: ");
  scanf("%d", &num);

  calc3 = num % 3;
  calc5 = num % 5;

  if ((calc3 == 0) && (calc5 == 0))
  {
    printf("O numero eh divisivel por 3 e 5 simultaneamente.");
  }
  else if (calc3 == 0)
  {
    printf("O numero eh divisivel apenas por 3.");
  }
  else if (calc5 == 0)
  {
    printf("O numero eh divisivel apenas por 5.");
  }
  else
    printf("O numero nao eh divisivel por 3 ou 5.");
    
  return 0;
}