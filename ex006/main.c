#include <stdio.h>
/*. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim
como a diferença existente entre ambos*/
int main()
{
  int n1, n2, nx, calc;
  printf("Digite o primeiro numero: ");
  scanf("%d", &n1);
  printf("Digite o segundo numero: ");
  scanf("%d", &n2);

  if (n1 > n2)
  {
    nx = n1;
    n1 = n2;
    n2 = nx;
  }
  calc = n2 - n1;
  printf("Os numeros digitados foram: %d, %d\n  - O maior numero: %d\n  - A diferenca entre eles: %d", n1, n2, n2, calc);
  return 0;
}