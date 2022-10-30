/* processa uma venda e avisa caso se mais de 10
unidades vendidas foram vendidas */
#include<stdio.h>
int main(void)
{
  char codigo;
  int quantidade;
  float total;
  printf("digite o codigo do produto e número de unidades:\n");
  scanf(" %c %d", &codigo, &quantidade);
  if (codigo == 'a' || codigo == 'A') {
    total = quantidade * 10;
    total = total * 0.90;
  }
  if (codigo == 'b' || codigo == 'B')
    total = quantidade*20;
  if (codigo == 'c' || codigo == 'C')
    total = quantidade*30;
  printf("o valor a pagar é de R$ %6.2f.\n",total);
  if (quantidade > 10)
    printf("Foram vendidas mais de 10 unidades do tipo %c.\n", codigo);
  return 0;
}
