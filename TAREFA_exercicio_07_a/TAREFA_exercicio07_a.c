#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float matriz_a[2][3], matriz_b[3][2], matriz_resultado[2][2],multi;
    int i = 0, j = 0, k = 0, l = 0, z = 0,k1 = 0, k2 = 0;

    // LER MATRIZ A
    for (i = 0; i < 2; i++)
    {
        for( j = 0; j < 3; j++)
        {
            printf("informe o elemento[%d][%d] da matriz A:",i+1,j+1);
            scanf("%f", &matriz_a[i][j]);
        }
    }
    printf("\n");

    // LER MATRIZ B
    for (k = 0; k < 3; k++)
    {
        for( l = 0; l < 2; l++)
        {
            printf("informe o elemento[%d][%d] da matriz B:",k+1,l+1);
            scanf("%f", &matriz_b[k][l]);
        }
    }

    // MULTIPLICAÇÃO A x B
    for(k1=0; k1<2; k1++)
    {
        for(k2=0; k2<2; k2++)
        {
            multi = 0;
            for(z=0; z<3; z++)
            {
                multi+=matriz_a[k1][z]*matriz_b[z][k2];
                matriz_resultado[k1][k2]= multi;
            }
        }
    }

    //  IMPRIMIR MATRIZ A
    printf("\nMATRIZ A:\n");
    for (i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("\t%0.2f", matriz_a[i][j]);
        }
        printf("\n");
    }
    //  IMPRIMIR MATRIZ B
    printf("\nMATRIZ B:\n");
    for (k = 0; k < 3; k++)
    {
        for( l = 0; l < 2; l++)
        {
            printf("\t%0.2f", matriz_b[k][l]);
        }
        printf("\n");
    }

    // IMPRIMIR MATRIZ RESULTADO
    printf("\n");
    printf("A x B:\n");
    for (k1 = 0; k1 < 2; k1++)
    {
        for( k2 = 0; k2 < 2; k2++)
        {
            printf("\t%0.2f", matriz_resultado[k1][k2]);
        }
        printf("\n");
    }


    return 0;
}
