#include <stdio.h>
#include <string.h>
#define TAMANHO 100
int main() {
  char s1[] = "lu";
  char s2[] = "lu";
  int comp;

  comp = strcmp(s1, s2);
  
  printf("A resposta de strcmp é %d\n", comp);
  return 0;
}
