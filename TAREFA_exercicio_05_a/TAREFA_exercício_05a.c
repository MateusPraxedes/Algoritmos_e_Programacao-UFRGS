#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int x, contador;
  float valores, porcetagem_n, porcetagem_p, valores_negativos = 0, valores_positivos = 0;
    printf("Informe a quantidade de valores ( > 0):\n", contador+1);
    scanf("%d",&x);
    for(contador = 0; contador < x; contador++){
     printf("Informe um valor %d: \n", contador+1);
     scanf("%f",&valores);
     if (valores < 0)
      valores_negativos++;
      else if (valores >= 0)
       valores_positivos++;}
  if (x > 0) {
  porcetagem_n = 100 *(valores_negativos / (valores_negativos + valores_positivos)) ;
  porcetagem_p = 100 *(valores_positivos / (valores_negativos + valores_positivos)) ;
  printf("Quantidade de valores negativos %0.0f ou %0.2f %% \n", valores_negativos, porcetagem_n);
  printf("Quantidade de valores positivos %0.0f ou %0.2f %% \n", valores_positivos, porcetagem_p);}
    else
     printf("O valor informado tem que ser maior do 0");

return 0;
}