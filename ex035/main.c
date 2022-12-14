#include <stdio.h>
/* Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em anos não bissextos.
 */
int main()
{
  int dd, mm, yy, rest;
  printf("Digite uma data (DD/MM/YYYY): ");
  scanf("%d/%d/%d", &dd, &mm, &yy);

  if ((dd > 0 && dd <= 31) && (mm > 0 && mm <= 12))
  {
    switch (mm)
    {
    case 2:
      // Se o ano for bissexto...
      if ((yy % 4) == 0)
      {
        if (dd > 29)
        {
          printf("Data invalida. O ano de %d eh bissexto, portanto, Fevereiro tem apenas 29 dias.", yy);
        }
        else
        {
          printf("Data valida!");
        }
      }
      else
      {
        if (dd > 28)
        {
          printf("Data invalida! O ano de %d nao eh bissexto, portanto, Fevereiro tem apenas 28 dias.", yy);
        }
        else
        {
          printf("Data valida!");
        }
      }
      break;
    //Meses que têm 30 dias
    case 4:
    case 6:
    case 9:
    case 11:
      if (dd > 30)
        printf("Data invalida. Esse mes pode ter no maximo 30 dias.");
      else
        printf("Data valida!");
      break;
    //Meses que têm 31 dias
    default:
      printf("Data valida!");
      break;
    }
    // Fevereiro Bissexto
  }
  else
  {
    printf("Data invalida!");
  }
  return 0;
}