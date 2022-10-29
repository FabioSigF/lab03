#include <stdio.h>

int main()
{
  /*
    Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo:
    CONSUMO   (Km/l)   MENSAGEM
    menor que   8       Venda o carro!
    entre      8 e 14   Econômico!
    maior que   14      Super econômico!
  */
  float km, l, consumo;
  printf("Qual a distancia(KM) do percurso? ");
  scanf("%f", &km);
  printf("Quantos litros de gasolina foram consumidos? ");
  scanf("%f", &l);
  if ((km < 0) || (l < 0))
  {
    printf("Os valores digitados nao podem ser negativos. FIM DO PROGRAMA!");
  }
  else
  {
    consumo = km/l;
    if(consumo < 8) {
      printf("Venda o carro! Seu carro faz apenas %.2fkm por litro.", consumo);
    }
    else
    {
      if(consumo < 14) {
        printf("Economico! Seu carro faz %.2fkm por litro.", consumo);
      }
      else
      {
        printf("Super economico! Seu carro faz %.2fkm por litro.", consumo);
      }
    }
  }

  return 0;
}