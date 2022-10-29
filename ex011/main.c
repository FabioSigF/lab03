#include <stdio.h>

int main()
{
  /*Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1). Se o número lido não for maior do que zero, o programa terminará com a mensagem: “Número inválido”*/

  int num, numSobr, sum, res, div;

  printf("Digite um numero inteiro: ");
  scanf("%d", &num);

  if (num <= 0)
  {
    printf("Numero invalido. FIM DO PROGRAMA!");
  }
  else
  {
    /*Usamos a variável numSobr para que ela possa sofrer alteraçãos sem perder o num original durante  o programa.*/
    numSobr = num;
    sum = 0;
    while (numSobr >= 10)
    {
      /*Pegamos os primeiros dígitos do numero*/
      div = numSobr / 10;
      /*Tiramos o último digito*/
      res = numSobr % 10;
      /*Somamos o valor de cada digito*/
      sum += res;
      /*numSobr se torna os digitos iniciais*/
      numSobr = div;

      if (numSobr < 10) {
        sum += numSobr;
      }
    }
    printf("A soma de todos os algarismos de %d foi igual a: %d.", num, sum);
  }
  return 0;
}