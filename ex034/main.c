#include <stdio.h>

int main()
{
  /* Leia a nota e o número de faltas de um aluno, e escreva seu conceito. Quando o aluno tem mais de 20 faltas ocorre uma redução de conceito */
  int faltas;
  float nota;
  char conc;

  printf("Digite sua nota (entre 0 e 10): ");
  scanf("%f", &nota);
  printf("Digite quantas faltas voce teve: ");
  scanf("%d", &faltas);

  if ((nota < 0) || (nota > 10) || (faltas < 0))
  {
    printf("Valores invalidos. FIM DO PROGRAMA!");
  }
  else
  {
    if (faltas <= 20)
    {
      if (nota < 4)
      {
        conc = 'E';
      }
      else if (nota < 5)
      {
        conc = 'D';
      }
      else if (nota < 7.5)
      {
        conc = 'C';
      }
      else if (nota < 9)
      {
        conc = 'B';
      }
      else
      {
        conc = 'A';
      }
    }
    else
    {
      if (nota < 4)
      {
        conc = 'E';
      }
      else if (nota < 5)
      {
        conc = 'E';
      }
      else if (nota < 7.5)
      {
        conc = 'D';
      }
      else if (nota < 9)
      {
        conc = 'C';
      }
      else
      {
        conc = 'B';
      }
    }

    printf("Sua nota foi %.2f e sua quantidade de faltas foi %d. Portanto, seu conceito foi: '%c'", nota, faltas, conc);
  }
  return 0;
}