#include <stdio.h>
/* Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e
se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em
anos não bissextos.
*/
int main()
{
  int dd, mm, yy;
  printf("Digite uma data (DD/MM/YY): ");
  scanf("%d/%d/%d", &dd, &mm, &yy);

  if((dd < 0 || dd > 31) || (mm < 0 || mm > 12))
  {
    //Fevereiro Bissexto
    if (mm == 2)
    {
      if((((yy % 4) == 0) && (mm == 2) && (dd <= 29)) || ((mm == 2) && (dd <= 28)))
      {

      }
    } 
    else
    {
      
    }
  }
  return 0;
}