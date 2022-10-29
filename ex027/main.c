#include <stdio.h>

int main()
{
  /*
  Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
  Infantil A = 5 a 7
  Infantil B = 8 a 10
  Juvenil A = 11 a 13
  Juvenil B = 14 a 17
  Sênior = maiores de 18 anos
  */
  int idade;
  printf("Digite a sua idade: ");
  scanf("%d", &idade);

  if (idade < 0)
  {
    printf("Valor invalido. FIM DO PROGRAMA!");
  }
  else
  {
    if (idade < 5)
    {
      printf("Voce ainda nao possui idade para ser nadador.");
    }
    else
    {
      printf("Voce se encaixa na categoria ");
      if (idade < 8)
      {
        printf("Infantil A.");
      }
      else
      {
        if (idade < 11)
        {
          printf("Infantil B.");
        }
        else
        {
          if (idade < 14)
          {
            printf("Juvenil A.");
          }
          else
          {
            if (idade < 18)
            {
              printf("Juvenil B.");
            }
            else
            {
              printf("Senior.");
            }
          }
        }
      }
    }
  }

  return 0;
}