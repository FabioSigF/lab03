#include <stdio.h>
/*Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números
forem iguais, imprima a mensagem: “Números iguais”*/
int main()
{
  int n1, n2, nx;
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
  else if (n1 == n2)
  {
    printf("Os dois numeros digitados sao iguais!\n");
  }
  printf("O maior numero digitado foi: %d.", n2);
  return 0;
}