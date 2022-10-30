#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int matriz[3][3];
    int i = 0, j = 0, k = 0, l = 0, maior ;

    for (i = 0; i < 3; i++)
    { do{

        for( j = 0; j < 3; j++)
        {


            printf("informe o elemento[%d][%d] da matriz:",i,j);
            scanf("%d", &matriz[i][j]);}}
             while(matriz[i][j]< 1 );
        }





    printf("\n");
    printf("\nMATRIZ ORIGINAL:\n");
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("\t%d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(k = 0; k < 3; k++)
    {
        maior = 0;
        for(l = 0; l < 3; l++)
        {
            if(matriz[l][k] > maior)
            {
                maior = matriz[l][k];
            }
        }
        printf("\t[%d]:%d",k, maior);

    }


    return 0;
}
