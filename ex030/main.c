#include <stdio.h>

int main()
{
  /*Faça um programa que receba três números e mostre-os em ordem crescente.*/
  int n1, n2, n3, c;
  printf("Digite o primeiro numero inteiro: ");
  scanf("%d", &n1);
  printf("Digite o segundo numero inteiro: ");
  scanf("%d", &n2);
  printf("Digite o terceiro numero inteiro: ");
  scanf("%d", &n3);

  if (n1 > n3)
  {
    c = n3;
    n3 = n1;
    n1 = c;
  }

  if (n2 > n3)
  {
    c = n3;
    n3 = n2;
    n2 = c;
  }

  if (n1 > n2)
  {
    c = n2;
    n2 = n1;
    n1 = c;
  }

  printf("Em ordem crescente, fica: %d, %d, %d.", n1, n2, n3);

  return 0;
}