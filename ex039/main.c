#include <stdio.h>
/*
 39.Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor salário terão um aumento proporcionalmente maior do que os funcionários com um salário maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário. Faça um programa que leia:
  o valor do salário atual do funcionário;
  o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).
 Use as tabelas abaixo para calcular o salário reajustado deste funcionário e imprima o valor do salário final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum aumento.
*/
int main()
{
  float sal, nsal, reaj, bon;
  int ts;
  printf("Digite o valor do seu salario: ");
  scanf("%f", &sal);
  printf("Digite, em anos, qual o seu tempo de servico na empresa: ");
  scanf("%d", &ts);

  if ((sal < 0) || (ts < 0))
  {
    printf("Valores invalidos. FIM DO PROGRAMA!");
  }
  else
  {
    // Reajuste de salario
    if (sal <= 500)
    {
      reaj = sal * 1.25;
    }
    else if (sal <= 1000)
    {
      reaj = sal * 1.20;
    }
    else if (sal <= 1500)
    {
      reaj = sal * 1.15;
    }
    else if (sal <= 2000)
    {
      reaj = sal * 1.10;
    }
    else
    {
      reaj = sal;
    }
    // Bonus por tempo de serviço
    if (ts < 1)
    {
      bon = 0;
    }
    else if (ts <= 3)
    {
      bon = 100;
    }
    else if (ts <= 6)
    {
      bon = 200;
    }
    else if (ts <= 10)
    {
      bon = 300;
    }
    else
    {
      bon = 500;
    }
    // Novo salario
    nsal = reaj + bon;
    printf("Com o reajuste de salario e bonus, voce recebera R$%.2f.", nsal);
  }
  return 0;
}