#include <stdio.h>
/*Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar*/
int main()
{
  int num;
  printf("Digite um numero inteiro: ");
  scanf("%d", &num);
  if (num < 0)
  {
    printf("O numero digitado foi negativo.");
  }
  else
  {
    printf("O numero digitado foi positivo ou nao negativo.");
  }
}