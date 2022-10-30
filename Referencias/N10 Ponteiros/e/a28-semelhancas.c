#include <stdio.h>
#define TAM 2
int main()
{
  int v[TAM]; //alocação de vetor de inteiros de tamanho TAM
  int i;

  printf("Leitura com acesso tipo ponteiro\n");
  for (i = 0; i < TAM; i++)
    scanf("%d",v+i);       // ja eh ponteiro (sem o "e" comercial)

  printf("Impressao com acesso tipo ponteiro\n");
  for (i = 0; i < TAM; i++)
    printf("%d ",*(v+i)); //acessamos o valor apontado por v+i
  printf("\n");

  printf("Impressao com acesso tipo vetor\n");
  for (i = 0; i < TAM; i++)
    printf("%d ",v[i]);   //acessamos a posição i de v
  printf("\n");
  return 0;
}
