#include <stdio.h>
/*Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na
tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e
10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o
programa termina.*/
int main()
{
  float n1, n2, m;

  printf("Digite a primeira nota (entre 0 e 10): ");
  scanf("%f", &n1);
  printf("Digite a segunda nota (entre 0 e 10): ");
  scanf("%f", &n2);

  if( ((n1 >= 0) && (n1 <= 10)) && ((n2 >= 0) && (n2 <= 10)) ) {
    m = (n1 + n2)/2;
    printf("Primeira nota: %.2f\nSegunda nota: %.2f\nMedia das notas: %.2f", n1, n2, m);
  } else {
    printf("Valores invalidos. FIM DE PROGRAMA!");
  }
  return 0;
}