#include<stdio.h>
#include <math.h>
int *procura_binaria_valor (int *v, int tamanho, int valor) {
  int achou = 0, inicio = 0, fim = tamanho, meio;
  while (achou == 0 && fabs(fim-inicio) > 1){
    meio = inicio + (fim - inicio)/2;
    printf("valor do meio = %d, %d %d\n", v[meio], inicio, fim);
    if (v[meio] == valor) //achou o valor
      achou = 1;
    else if(v[meio] > valor) //valor está na primeira metade
      fim = meio;
    else //valor está na segunda metade
      inicio = meio;
  }
  if (*(v+meio) == valor)
    return v+meio;
  else
    return NULL;
}
