#include <stdio.h>
/* A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo
de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um
exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho
de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na
tela se o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi
aprovado. Faça todas as verificações necessárias.*/
int main()
{
  float n1, n2, n3, media;

  printf("Digite a nota do Trabalho de Laboratorio: ");
  scanf("%f", &n1);
  printf("Digite a nota da Avaliacao Semestral: ");
  scanf("%f", &n2);
  printf("Digite a nota do Exame Final: ");
  scanf("%f", &n3);

  if ((n1 < 0) || (n2 < 0) || (n3 < 0) || (n1 > 10) || (n2 > 10) || (n3 > 10))
  {
    printf("Valores invalidos. FIM DO PROGRAMA!");
  }
  else
  {

    media = ((2 * n1) + (3 * n2) + (5 * n3)) / 10;

    if (media < 3)
    {
      printf("Reprovado!");
    }
    else if (media < 5)
    {
      printf("Recuperacao!");
    }
    else
    {
      printf("Aprovado!");
    }
    printf(" A sua media foi: %.2f.", media);
  }
  return 0;
}