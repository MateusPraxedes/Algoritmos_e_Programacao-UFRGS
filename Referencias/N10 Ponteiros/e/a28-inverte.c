#include <stdio.h>
#include <string.h>
#define TAM 20
void inverte(char* str1, char* str2);
int main() {
  char c1[TAM], c2[TAM];
  fgets(c1, TAM, stdin);
  c1[strlen(c1)-1] = '\0';
  inverte_texto(c1, c2);
  printf("[%s] -> [%s]\n", c1, c2);
  return 0;
}

void inverte(char* str1, char* str2) {
  int i, n = strlen(str1);
  for (i = 0; i < n; i++)
    str2[i] = str1[n - 1 - i];
  str2[i] = '\0';
}
