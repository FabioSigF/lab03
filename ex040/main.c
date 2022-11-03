#include <stdio.h>
/*40. O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo de fábrica, de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao consumidor*/
int main()
{
  float cf, tot, cd, ci;
  printf("Digite o valor do custo de fabrica do carro: ");
  scanf("%f", &cf);

  if (cf < 0)
  {
    puts("Valor invalido. FIM DO PROGRAMA!");
  }
  else
  {

    if (cf <= 12000)
    {
      cd = cf * 0.05;
      ci = cf * 0;
    }
    else if (cf <= 25000)
    {
      cd = cf * 0.10;
      ci = cf * 0.15;
    }
    else
    {
      cd = cf * 0.15;
      ci = cf * 0.20;
    }
    tot = cf + cd + ci;
    printf("O custo ao consumidor do carro no valor de R$%.2f sera de R$%.2f.", cf, tot);
  }
  return 0;
}