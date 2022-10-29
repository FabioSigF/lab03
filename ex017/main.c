#include <stdio.h>
/* Faça um programa que calcule e mostre a área de um trapézio*/
int main()
{
  float bMenor, bMaior, h, a;
  printf("Digite o valor em metros da base menor: ");
  scanf("%f", &bMenor);
  printf("Digite o valor em metros da base maior: ");
  scanf("%f", &bMaior);
  printf("Digite o valor em metros da altura: ");
  scanf("%f", &h);

  if (
      (bMenor < 0) || (bMaior < 0) || (h < 0) || // num negativo
      (bMenor >= bMaior)                         // base menor > base maior
  )
  {
    printf("Valores invalidos. FIM DO PROGRAMA!");
  }
  else
  {
    a = ((bMaior + bMenor) * h) / 2;
    printf("A area do trapezio: %.2fm^2.", a);
  }
  return 0;
}