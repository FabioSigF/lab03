#include <stdio.h>
/*38.Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros: Dia, Mês e Ano. Teste a validade desta data para saber se está é uma data válida. Teste se o dia fornecido é um dia válido: dia > 0, dia  28 para o mês de fevereiro (29 se o ano for bissexto), dia  30 em abril, junho, setembro e novembro, dia  31 nos outros meses. Teste a validade do mês: mês > 0 e mês < 13. Teste a validade do ano: ano  ano atual (use uma constante definida com o valor igual a 2022). Imprimir: “data válida” ou “data inválida” no final da execução do programa*/
int main()
{
  int dd, mm, yy, rest;
  const int cyy = 2022;
  printf("Digite sua data de nascimento (DD/MM/YYYY): ");
  scanf("%d/%d/%d", &dd, &mm, &yy);

  if ((dd > 0 && dd <= 31) && (mm > 0 && mm <= 12) && (yy <= cyy))
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
    // Meses que têm 30 dias
    case 4:
    case 6:
    case 9:
    case 11:
      if (dd > 30)
        printf("Data invalida. Esse mes pode ter no maximo 30 dias.");
      else
        printf("Data valida!");
      break;
    // Meses que têm 31 dias
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