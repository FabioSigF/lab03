#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  /*
  Faça uma prova de matemática para crianças que estão aprendendo a somar números inteiros menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na tela a pergunta: qual é a soma de a + b, onde a e b são os números aleatórios. Peça a resposta. Faça cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas corretas, além de quantas vezes o aluno acertou.
  */
  int r1, r2, resp, calc, i, n = 5;
  srand(time(NULL));
  
  r1 = rand() % 100 + 1;
  r2 = rand() % 100 + 1;

  printf("Qual a soma entre %d + %d?\nR= ", r1, r2);
  scanf("%d", &resp);

  calc = r1 + r2;

  if (resp != calc)
    printf("Resposta incorreta! A soma de %d + %d = %d.", r1, r2, calc);
  else
    printf("Resposta correta! A soma de %d + %d = %d.", r1, r2, calc);
  
  return 0;
}