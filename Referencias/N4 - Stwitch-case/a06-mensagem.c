/* Imprime uma mensagem, de acordo com um código lido - solução usando if simples
   Entrada: valor (inteiro) lido do teclado; Saida: Mensagem na tela */
#include <stdio.h>
int main ( )
{
  int cod;
  printf("Codigo (1 a 4): ");
  scanf ("%d", &cod);
  if (cod == 1)
    printf ("Mensagem 1\n");
  else if (cod == 2)
    printf ("Mensagem 2\n");
  else if (cod == 3)
    printf ("Mensagem 3\n");
  else if (cod == 4)
    printf ("Mensagem 4\n");
  else if (cod < 1 || cod > 4)
    printf ("Mensagem de erro\n");
  return 0;
}
