#include <stdio.h>
#include <math.h>
/*Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número inválido”. Se o número for positivo, calcular o logaritmo deste número.*/
int main()
{
  int num;
  double calc;

  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &num);
  if (num <= 0)
  {
    printf("Numero invalido. FIM DO PROGRAMA!");
  } else {
    calc = log(num);
    printf("O logaritmo do numero %d eh: %lf.", num, calc);
  }
  
  return 0;
}