#include <stdio.h>
#include <math.h>
int main()
{
  float n, calc;
  printf("Digite um numero real: ");
  scanf("%f", &n);
  if(n < 0) {
    calc = n*n;
    printf("O numero digitado foi %.2f. Elevado ao quadrado, fica; %.2f.", n, calc);
  } else {
    calc = sqrt(n);
    printf("O numero digitado foi %.2f. Sua raiz quadrada eh: %.2f.", n, calc);
  }
  return 0;
}