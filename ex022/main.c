#include <stdio.h>

int main()
{
  /*
    Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As condições para posentadoria são:
     Ter pelo menos 65 anos;
     Ou ter trabalhado pelo menos 30 anos;
     Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos
    */
  int idade, tserv, calcI, calcT;
  char sexo;
  const idadeMasc = 65, idadeFem = 60, tservMasc = 30, tservFem = 25;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("Quantos anos voce tem de servico? ");
  scanf("%d", &tserv);
  printf("Qual o seu sexo? [M/F] ");
  scanf(" %c", &sexo);

  if ((idade < 0) || (tserv < 0) || ((sexo != 'M') && (sexo != 'm') && (sexo != 'F') && (sexo != 'f')))
  {
    printf("Voce digitou dados invalidos. FIM DO PROGRAMA!");
  }
  else
  {
    if ((((sexo == 'M') || (sexo == 'm')) && ((idade >= idadeMasc) && (tserv >= tservMasc))) || (((sexo == 'F') || (sexo == 'f')) && ((idade >= idadeFem) && (tserv >= tservFem))))
    {
      printf("Parabens, voce ja consegue se aposentar!");
    }
    else
    {
      if ((sexo == 'M') || (sexo == 'm'))
      {
        printf("Infelizmente, voce ainda nao pode se aposentar. Entre os requisitos pendentes:\n");
        if (idade < idadeMasc)
        {
          calcI = idadeMasc - idade;
          printf("  -Idade minima: %d anos. Faltam %d anos para voce se aposentar.\n", idadeMasc, calcI);
        }
        if (tserv < tservMasc)
        {
          calcT = tservMasc - tserv;
          printf("  -Tempo de servico minimo: %d anos. Faltam %d anos de servico para voce se aposentar.\n", tservMasc, calcT);
        }
      }
      else
      {
        printf("Infelizmente, voce ainda nao pode se aposentar. Entre os requisitos pendentes:\n");
        if (idade < idadeFem)
        {
          calcI = idadeFem - idade;
          printf("  -Idade minima: %d anos. Faltam %d anos para voce se aposentar.\n", idadeFem, calcI);
        }
        if (tserv < tservFem)
        {
          calcT = tservFem - tserv;
          printf("  -Tempo de servico minimo: %d anos. Faltam %d anos de servico para voce se aposentar.\n", tservFem, calcT);
        }
      }
    }
  }
}