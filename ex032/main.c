#include <stdio.h>

int main()
{
  /*
  Escrever um programa que leia o código do produto escolhido do cardápio de uma lanchonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um pedido.
  */
  int cod, qnt;
  float p, tot;
  printf("Digite o codigo do produto: ");
  scanf("%d", &cod);

  if ((cod >= 100) && (cod <= 106))
  {
    switch (cod)
    {
    case 100:
      p = 1.20;
      printf("Cachorro Quente, R$%.2f.\n", p);
      break;
    case 101:
      p = 1.30;
      printf("Bauru Simples, R$%.2f.\n", p);
      break;
    case 102:
      p = 1.50;
      printf("Bauru com Ovo, R$%.2f.\n", p);
      break;
    case 103:
      p = 1.20;
      printf("Hamburguer, R$%.2f.\n", p);
      break;
    case 104:
      p = 1.70;
      printf("Cheeseburguer, R$%.2f.\n", p);
      break;
    case 105:
      p = 2.20;
      printf("Suco, R$%.2f.\n", p);
      break;
    case 106:
      p = 1.00;
      printf("Refrigerante, R$%.2f.\n", p);
      break;
    }

    printf("Quantidade: ");
    scanf("%d", &qnt);

    if(qnt < 1){
      printf("Quantidade invalida. FIM DO PROGRAMA!");
    } else {
      tot = p * qnt;
      printf("Total da compra: R$%.2f.", tot);
    }
  } else {
    printf("Codigo invalido. FIM DO PROGRAMA!");
  }

  return 0;
}