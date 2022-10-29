#include <stdio.h>

int main()
{
  /*Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo e,
se forem, se é um triângulo escaleno, equilátero ou isósceles, considerando os seguintes
conceitos:
 O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois
lados;
 Chama-se equilátero o triângulo que tem três lados iguais;
 Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
 Recebe o nome de escaleno o triângulo que tem os três lados diferentes;
*/
  float a, b, c;
  printf("Digite o valor A: ");
  scanf("%f", &a);
  printf("Digite o valor B: ");
  scanf("%f", &b);
  printf("Digite o valor C: ");
  scanf("%f", &c);

  // Verificar se valores são inválidos
  if ((a > (b + c)) || (b > (a + c)) || (c > (a + b)))
  {
    printf("Os valores digitados nao podem ser considerados como lados de um triangulo.");
  }
  else
  {
    // Equilátero
    if ((a == b) && (b == c))
    {
      printf("Os valores de A=%.1f, B=%.1f e C=%.1f sao de um triangulo equilatero.", a, b, c);
    }
    else
    {
      // Isósceles
      if ((a == b) || (b == c) || (a == c))
      {
        printf("Os valores de A=%.1f, B=%.1f e C=%.1f sao de um triangulo isosceles.", a, b, c);
      }
      else
      {
        // Escaleno
        printf("Os valores de A=%.1f, B=%.1f e C=%.1f sao de um triangulo escaleno.", a, b, c);
      }
    }
  }
  return 0;
}