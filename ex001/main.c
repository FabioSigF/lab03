#include <stdio.h>

int main(){
  float n1, n2, al;
  //Faça um programa que receba dois números e mostre qual deles é o maior
  printf("Digite o primeiro numero: ");
  scanf("%f", &n1);
  printf("Digite o segundo numero: ");
  scanf("%f", &n2);
  if(n1 < n2) {
    al = n1;
    n1 = n2;
    n2 = al;
  }
  printf("O maior numero digitado foi %.2f, e o menor foi %.2f.", n1, n2);

  return 0;
}