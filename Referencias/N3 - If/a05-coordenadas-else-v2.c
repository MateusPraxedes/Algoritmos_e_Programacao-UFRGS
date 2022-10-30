/* Obtem coordenadas e informa localização */
#include <stdio.h>
int main() {
  float x, y; //Entrada
  printf("Coordenadas: x = ");
  scanf("%f", &x);
  printf("e y = ");
  scanf("%f", &y);

  // identifica origem e eixos
  if (x == 0) // x = 0: possibilidade de origem ou eixo y
    if (y == 0) // y também = 0: localizou origem
      printf("Ponto na origem.\n");
    else // só pode ser eixo y
      printf("Ponto no eixo dos y.\n");
  else // x certamente é diferente de zero: não testa mais!
    if ( y == 0 ) // localizou eixo x
      printf("Ponto no eixo dos x.\n");
    else // só sobraram os quadrantes!!!
      if ( x > 0 ) // quadrantes 1 ou 4, dependendo de y
	if ( y > 0 ) // quadrante 1
	  printf("Ponto no quadrante 1.\n");
	else // quadrante 4, sem precisar mais testes
	  printf("Ponto no quadrante 4.\n");
      else // x é < 0: sobraram quadrantes 2 e 3, dependendo de y
	if ( y > 0 )
	  printf("Ponto no quadrante 2.\n");
	else // sobrou x < 0 e y < 0: não precisa testar
	  printf("Ponto no quadrante 3.\n");
  return 0;
}
