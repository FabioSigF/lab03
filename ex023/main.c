#include <stdio.h>

int main()
{
  /*Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for divisível por 400 ou se for ivisível por 4 e não for divisível por 100. Por exemplo: 1988, 1992, 1996.*/
  int ano;

  printf("Digite o ano? ");
  scanf("%d", &ano);
  if ((ano % 4) == 0)
    printf("O ano %d eh bissexto.", ano);
  else
    printf("O ano %d nao eh bissexto.");

  return 0;
}