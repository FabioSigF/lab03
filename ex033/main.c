#include <stdio.h>

int main()
{
  /*Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule e escreva o preço novo, e escreva uma mensagem em função do preço novo.*/
  float pa, pn;
  printf("Digite o preco para conferir o aumento: ");
  scanf("%f", &pa);

  if (pa < 0)
  {
    printf("O preco eh invalido. FIM DO PROGRAMA!");
  }
  else
  {
    if (pa <= 50)
    {
      pn = pa * 1.05;
    }
    else
    {
      if (pa <= 100)
      {
        pn = pa * 1.10;
      }
      else
      {
        pn = pa * 1.15;
      }
    }
    printf("O novo preco eh: R$%.2f. ", pn);
    if (pn <= 80)
    {
      printf("Barato!");
    }
    else
    {
      if (pn <= 120)
      {
        printf("Normal!");
      }
      else
      {
        if (pn <= 200)
        {
          printf("Caro!");
        }
        else
        {
          printf("Muito caro!");
        }
      }
    }
  }
  return 0;
}