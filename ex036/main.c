#include <stdio.h>
/*36. Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga ao vendedor*/
int main()
{
  float v, cp, ctot;

  printf("Digite o valor da venda: ");
  scanf("%f", &v);

  if (v < 0)
  {
    printf("Valor invalido. FIM DO PROGRAMA!");
  }
  else
  {
    cp = 0.14;
    if (v < 20000)
      ctot = 400 + (v * cp);
    else if (v < 40000)
      ctot = 500 + (v * cp);
    else if (v < 60000)
      ctot = 550 + (v * cp);
    else if (v < 80000)
      ctot = 600 + (v * cp);
    else if (v < 100000)
      ctot = 650 + (v * cp);
    else
    {
      cp = 0.16;
      ctot = 700 + (v * cp);
    }

    printf("O valor do produto vendido foi de %.2f. Portanto, a comissao sera de %.2f.", v, ctot);
  }
  return 0;
}