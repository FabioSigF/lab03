#include <stdio.h>
#include <math.h>
int main()
{
  /*
  Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das seguintes médias de acordo com um valor numérico digitado pelo usuário:
  (a) Geométrica:
  (b) Ponderada:
  (c) Harmônica:
  (d) Aritmética:
  */
  int opt;
  float x, y, z, calc;
  printf("Qual operacao voce deseja realizar?\n  [1]Geometrica\n  [2]Ponderada\n  [3]Harmonica\n  [4]Aritmetica\n  R= ");
  scanf("%d", &opt);
  if ((opt < 1) || (opt > 4))
  {
    printf("O valor digitado eh invalido. FIM DO PROGRAMA!");
  }
  else
  {
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de y: ");
    scanf("%f", &y);
    printf("Digite o valor de z: ");
    scanf("%f", &z);
    switch (opt)
    {
    case 1:
      calc = cbrt(x * y * z);
      break;
    case 2:
      calc = ((1 * x) + (2 * y) + (3 * z)) / 6;
      break;
    case 3:
      calc = 3 / ((1 / x) + (1 / y) + (1 / z));
      break;
    case 4:
      calc = (x + y + z) / 3;
      break;
    }
    printf("O resultado da operacao foi: %.2f.", calc);
  }
  return 0;
}