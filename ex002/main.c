#include <stdio.h>
#include <math.h>
int main(){
  //Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido 
  float num, nsqrt;
  printf("Digite um numero para tirar a raiz quadrada: ");
  scanf("%f", &num);
  if(num < 0){
    printf("Numero invalido, pois eh negativo.");
  } else {
    nsqrt = sqrt(num);
    printf("A raiz quadrada de %.2f eh %.2f.", num, nsqrt);
  }
  return 0;
}