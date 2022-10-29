#include <stdio.h>
/*Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do estudante e indicar se o estudante foi aprovado ou reprovado. A nota para aprovação deve ser igual ou superior a 60 pontos.*/
int main()
{
  float n1, n2, n3, calc;
  printf("Digite a primeira nota: ");
  scanf("%f", &n1);
  printf("Digite a segunda nota: ");
  scanf("%f", &n2);
  printf("Digite a terceira nota: ");
  scanf("%f", &n3);
  if ((n1 < 0) || (n2 < 0) || (n3 < 0))
  {
    printf("Notas invalidas. FIM DO PROGRAMA!");
  }
  else
  {
    /*( x1p1 + x2p2 + x3px... + xnpn ) / p1 + p2 + p3 + ... + pn */
    calc = ((1 * n1) + (1 * n2) + (2 * n3)) / 4;

    if (calc >= 60)
    {
      printf("Parabens, voce foi aprovado!");
    }
    else
    {
      printf("Reprovado!");
    }
    printf(" A sua media ponderada foi: %.2f.", calc);
  }

  return 0;
}