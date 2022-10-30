#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, distancia;
    printf("informe P1:  \n");
    scanf("%f%f", &x1,&y1 );
    printf("informe P2:  \n");
    scanf("%f%f", &x2,&y2 );
    distancia = sqrt(pow(x2-x1,2) + pow(y2-y1,2)) ;
    printf("distancia = %.4f \n",distancia);
    return 0;
}
