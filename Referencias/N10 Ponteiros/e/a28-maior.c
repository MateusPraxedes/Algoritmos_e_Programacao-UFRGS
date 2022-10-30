#include <stdio.h>
// função tipo ponteiro inteiro
int *maior(int vet[], int tamanho) {
  int i, *p; // índice e ponteiro de elemento do vetor
  p = vet;   // aponta para 1o elemento do vetor
  for (i = 0; i < tamanho; i++)
    if (vet[i] > *p)
      p = vet + i; // passa a apontar para o maior valor
  return p; // retorna o ponteiro
}

int main() {
  int vet[] = {3, 1, 8, 4}, *m = NULL;
  m = maior (vet, 4);
  printf("O maior elemento eh %d\n", *m);
  return 0;
}
