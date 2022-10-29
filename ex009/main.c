#include <stdio.h>
/*Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for
maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima:
“Empréstimo concedido”*/
int main()
{
  float sal, vparc, vmax;
  printf("Digite o seu salario: ");
  scanf("%f", &sal);
  printf("Digite o valor da parcela do emprestimo: ");
  scanf("%f", &vparc);
  vmax = sal * 0.20;

  if ((sal < 0) && (vparc < 0))
  {
    printf("Valor invalido. FIM DO PROGRAMA!");
  }
  else
  {
    if (vparc > vmax)
    {
      printf("Emprestimo nao concedido. Com o salario de %.2f, o valor maximo da parcela tem que ser: %.2f.", sal, vmax);
    }
    else
    {
      printf("Emprestimo concedido!");
    }
  }
  return 0;
}