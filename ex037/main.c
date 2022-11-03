#include <stdio.h>
/*
As tarifas de certo parque de estacionamento são as seguintes:
  - 1a e 2a hora - R$1,00 cada;
  - 3a e 4a hora - R$1,40 cada;
  - 5a hora e seguintes - R$2,00 cada

O número de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem estacionar durante 61 minutos pagará por duas horas, que é o mesmo que pagaria se tivesse permanecido 120 minutos. Os momentos de chegada ao parque e partida deste são apresentados na forma de pares de inteiros, representando horas e minutos. Por exemplo, o par 12 50 representará “dez para a uma da tarde”. Pretende-se criar um programa que, lidos pelo teclado os momentos de chegada e de partida, escreva na tela o preço cobrado pelo estacionamento. Admite-se que a chegada e a partida se dão com intervalo não superior a 24 horas. Portanto, se uma dada hora de chegada for superior à da partida, isso não é uma situação de erro, antes significará que a partida ocorreu no dia seguinte ao da chegada.
*/
int main()
{
  int ch, cm, sh, sm, difh, difm, toth;
  float tarf;
  printf("Digite a hora de chegada (HH:MM): ");
  scanf("%d:%d", &ch, &cm);
  printf("Digite a hora de saida (HH:MM): ");
  scanf("%d:%d", &sh, &sm);

  if (ch < 0 || ch > 24 || cm < 0 || cm > 59 || sh < 0 || sh > 24 || sm < 0 || sm > 59)
  {
    printf("Hora invalida!");
  }
  else
  {

    // Se ele chegou em um dia e saiu no seguinte...
    if (ch > sh)
    {
      difh = (23 - ch) + sh;
      difm = (60 - cm) + sm;
    }
    // Se ele saiu e chegou no mesmo dia
    else if (ch < sh)
    {
      difh = sh - ch;

      if (cm < sm)
        difm = sm - cm;
      else if (cm == 0 || sm == 0)
      {
        difh -= 1;
        difm = cm - sm;
      }
      else
        difm = cm - sm;
    }
    // Se chegou e saiu na mesma hora...
    else if (ch == sh)
    {
      // Se ele saiu no mesmo dia que chegou
      if (cm < sm)
      {
        difh = 0;
        difm = sm - cm;
      }
      // Se ele saiu no dia seguinte
      else
      {
        difh = 23;
        difm = 60 - (cm - sm);
      }
    }
    printf("Voce chegou aas %d:%d e saiu %d:%d. O veiculo ficou estacionado durante: %d:%d\n", ch, cm, sh, sm, difh, difm);

    // Aplicar valores
    if (difm != 0)
    {
      toth = (difh + 1);
    }

    if (toth <= 2)
    {
      tarf = toth * 1;
    }
    else if (toth <= 4)
    {
      tarf = 2 + ((toth - 2) * 1.4);
    }
    else
    {
      tarf = 2 + (2 * 1.4) + ((toth - 4) * 2);
    }

    printf("Foi cobrado %d horas de tarifa, o total de: R$%.2f.", toth, tarf);
  }
  return 0;
}