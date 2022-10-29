#include <stdio.h>

/*Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso
ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
 Homens: (72,7 * h) – 58,0
 Mulheres: (62,1 * h) – 44,7*/
int main()
{
  float h, pid;
  char sex;
  printf("Digite a sua altura em metros: ");
  scanf("%f", &h);
  printf("Digite o seu sexo (M/F): ");
  scanf(" %c", &sex);

  if (h < 0)
  {
    printf("Valores invalidos. FIM DO PROGRAMA!");
  }
  else
  {
    switch (sex)
    {
    case 'm':
    case 'M':
      pid = (72.7 * h) - 58, 0;
      printf("O seu peso ideal: %.2fkg.", pid);
      break;
    case 'f':
    case 'F':
      pid = (62.1 * h) - 44, 7;
      printf("O seu peso ideal: %.2fkg.", pid);
      break;
    default:
      printf("Sexo invalido. FIM DO PROGRAMA!");
      break;
    }
  }
  return 0;
}