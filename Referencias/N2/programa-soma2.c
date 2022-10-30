/*

   =====================================================
   calcula a soma de 2 valores inteiros lidos do teclado
   =====================================================

*/
#include<stdio.h> // biblioteca com operações de entrada e saída
int main( )
{
  int soma;

  float int2;
  
  int val1, val2;       // declaração das variáveis de entrada
  /*
    Passo 1: Ler val1
  */
  printf("Valor 1:\n"); // mensagem impressa na tela
  scanf("%d", &val1);   // leitura da informação digitada
  /*
    Passo 2: Ler val2
  */
  printf("Valor 2:\n");
  scanf("%d", &val2);
  /*
    Passo 3: Ler efetuar a soma
  */
  
  soma = val1 + val2;   // armazena resultado em soma
  printf("Resultado da soma: %d (%d + %d)\n", soma, val1, val2); // e mostra na tela
  return 0;             // encerra o programa de forma correta
}
