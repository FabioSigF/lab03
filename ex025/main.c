#include <stdio.h>
#include <math.h>
int main()
{
  /*
  Calcule as raízes da equação de 2º grau.
  Lembrado que ax2 + bx + c = 0 representa uma equação do 2º grau.
  A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de segundo grau”.
    -Se delta < 0, não existe real. Imprima a mensagem “Não existe raiz”.
    -Se delta = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
    -Se delta >= 0, imprima as duas raízes reais.
  */
  float a, b, c, delt, x1, x2;
  printf("Vamos calcular a raiz da equacao de 2nd Grau.\nQual o valor de a? ");
  scanf("%f", &a);
  printf("Qual o valor de b? ");
  scanf("%f", &b);
  printf("Qual o valor de c? ");
  scanf("%f", &c);
  printf("A equacao entao ficou: %.1fx^2 %.1fx %.1f = 0.\n", a, b, c);
  // Verificação de A
  if (a == 0)
  {
    printf("Como voce pode ver, o valor de 'a' eh invalido. Ele nao pode ser 0. FIM DO PROGRAMA!");
  }
  else
  {
    // Calculando delta
    delt = (b * b) - 4 * a * c;
    
    printf("O delta eh igual a: %.2f.\n", delt);
    // Condicionais para raiz inexistente
    if (delt < 0)
    {
      printf("Nessa equacao, nao existe raiz.");
    }
    else
    {
      // Equação
      x1 = (b*-1 + sqrt(delt)) / (2*a);
      x2 = (b*-1 - sqrt(delt)) / (2*a);

      if(delt = 0) {
        printf("O delta eh 0. Dessa forma, a unica solucao eh: %.2f.", x1);
      } else {
          printf("As solucoes sao:\n  x1 = %.2f\n  x2 = %.2f", x1, x2);
      }
    }
  }
}