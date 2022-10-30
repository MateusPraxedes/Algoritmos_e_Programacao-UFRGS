#include <stdio.h>
int main() {
  int i, *pi1, *pi2;
  double d, *pd1, *pd2;
  char c, *pc1, *pc2;
  c = 'A';
  d = 5.423;
  i = -20;
  pi1 = &i;
  pi2 = pi1 + 1; // incrementa o espaco ocupado por um inteiro (4 bytes)
  pd1 = &d;
  pd2 = pd1 + 2; // incrementa duas vezes o espaco ocupado por um double (2*8 bytes)
  pc1 = &c;
  pc2 = pc1 - 1; // decrementa o espaco ocupado por um char (1 byte)
  printf("Resultados em hexadecimal\n");
  printf("pi1: %p, pi2: %p\n", pi1, pi2);
  printf("pd1: %p, pd2: %p\n", pd1, pd2);
  printf("pc1: %p, pc2: %p\n\n", pc1, pc2);
  printf("Resultados em decimal\n");
  printf("pi1: %d, pi2: %d\n", pi1, pi2);
  printf("pd1: %d, pd2: %d\n", pd1, pd2);
  printf("pc1: %d, pc2: %d\n", pc1, pc2);
  return 0;
}
