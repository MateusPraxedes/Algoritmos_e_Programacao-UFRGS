#include <stdio.h>
int main() {
  char str[80] = "Alpha Centauri";
  char *p1;

  //atribui à p1 o endereço do primeiro elemento de str
  p1 = str;

  //imprimir o mesmo elementos com dois atalhos
  printf("[%c] = [%c]\n", str[0], *p1);

  // str[4] ou *(p1+4) acessam o 5o caractere (elemento) de str
  printf("[%c] = [%c]\n", str[4], *(p1+4));

  return 0;
}
