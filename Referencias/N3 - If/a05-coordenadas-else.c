/* Obtem coordenadas e informa localização */
#include <stdio.h>
int main() {
  float x, y; //Entrada
  printf("Coordenadas: x = ");
  scanf("%f", &x);
  printf("e y = ");
  scanf("%f", &y);
  if (x == 0 && y == 0)
    printf("Ponto na origem");
  else if (x > 0 && y > 0)
    printf("Ponto no quadrante 1.\n");
  else if (x < 0 && y > 0)
    printf("Ponto no quadrante 2.\n");
  else if (x < 0 && y < 0)
    printf("Ponto no quadrante 3.\n");
  else if (x > 0 && y < 0)
    printf("Ponto no quadrante 4.\n");
  else if (x != 0 && y == 0)
    printf("Ponto no eixo dos x.\n");
  else if (x == 0 && y != 0)
    printf("Ponto no eixo dos y.\n");
  return 0;
}
