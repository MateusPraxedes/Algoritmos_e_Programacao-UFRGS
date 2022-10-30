#include <stdio.h>
#define TAM 3
int main() {

  int v[TAM] = {1,2,3};
  int *p;
  p = v; //operação válida. Atribui a p o endereço do primeiro elemento de v
  v = p; //operação inválida (pois v aponta para um endereço fixo de memória)

  return 0;
}
