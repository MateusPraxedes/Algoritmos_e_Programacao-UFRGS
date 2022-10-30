/* Enunciado:
   Ler um valor e, no caso de ser menor do que 10, emitir uma mensagem */

/* Algoritmo:
1. Início
2. Ler Valor
3. Se Valor < 10
3.1 Escrever mensagem
4. Fim */

#include <stdio.h>
int main() {
  int valor;
  printf("Valor 1:\n");
  scanf("%d", &valor);
  if (valor < 10)
    printf("%d é menor que 10.\n", valor);
  return 0;
}
