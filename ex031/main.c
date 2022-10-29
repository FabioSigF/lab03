#include <stdio.h>
int main()
{
  /*Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostra qual a classificação dessa pessoa. */
  float h, p;
  char cl;
  printf("Qual a sua altura em metros? ");
  scanf("%f", &h);
  printf("Qual o seu peso em quilos? ");
  scanf("%f", &p);

  if (h < 0 || p < 0)
  {
    printf("Medidas invalidas. FIM DE PROGRAMA!");
  }
  else
  {
    if (h < 1.20)
    {
      if (p <= 60)
      {
        cl = 'A';
      }
      else
      {
        cl = p <= 90 ? 'D' : 'G';
      }
    }
    else
    {
      if (h < 1.71)
      {
        if (p <= 60)
        {
          cl = 'B';
        }
        else
        {
          cl = p <= 90 ? 'E' : 'H';
        }
      }
      else
      {
        if (p <= 60)
        {
          cl = 'C';
        }
        else
        {
          cl = p <= 90 ? 'F' : 'I';
        }
      }
    }
  printf("Com a altura de %.2f metros e o peso de %.2fkg, voce se enquadra na classificacao: '%c'.", h, p, cl);
  }
  return 0;
}