#include <stdio.h>
#include <math.h>
int main()
{
  float num, calc1, calc2;
  printf("Digite um numero: ");
  scanf("%f", &num);
  if (num > 0) {
    calc1 = num*num;
    calc2 = sqrt(num);
    printf("O numero digitado foi %.2f.\n  O quadrado no numero: %.2f\n  A raiz quadrada do numero: %.2f", num, calc1, calc2);
  } else {
    printf("O numero digitado nao foi positivo.");
  }
  return 0;
}