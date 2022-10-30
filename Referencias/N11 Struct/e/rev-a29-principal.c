#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "rev-a29-bolha-melhor.h"
#include "rev-a29-procura-binaria.h"
#define TAMVETOR 1000
int vetor[TAMVETOR];
int main() {
  int i, valor;
  scanf("%d", &valor);
  int *p;
  srand(0);
  for (i = 0; i < TAMVETOR; i++) {
    *(vetor+i) = rand()%1000;
  }
  ordena_pela_bolha (vetor, TAMVETOR);
  p = procura_binaria_valor (vetor, TAMVETOR, valor);
  if (p != NULL)
    printf("Achou %d na posição %d\n", *p, p-vetor);
  else
    printf("Não achou o valor %d\n", valor);
  return 0;
}
