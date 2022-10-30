#include <stdio.h>
int main()
{
  int resultado = 20;
  int codigo
  printf("Entre com o código:\n");
  scanf("%d", &codigo);
  if (codigo == 1)
    resultado += 5;
  else if (codigo == 3 || codigo == 5)
    resultado -= 2;
  else if (codigo == 6)
    resultado = 2 * (resultado + 1);
  else if (codigo >= 8 && codigo <= 10)
    resultado = 0;
  else if (codigo == 11)
    resultado = 123;
  else
    printf("Código inválido.\n");
  printf("Resultado: %d\n", resultado);
  return 0;
}
