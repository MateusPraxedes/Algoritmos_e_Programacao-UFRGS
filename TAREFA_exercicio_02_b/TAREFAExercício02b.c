#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int altura, base, area, perimetro;
    printf("informe a altura:\n");
    scanf("%d", &altura);
    printf("informe a base:\n");
    scanf("%d", &base);
    area = base * altura;
    perimetro = 2 * (base + altura);
    printf("area:%d perimetro: %d \n", area, perimetro);
    return 0;
}
