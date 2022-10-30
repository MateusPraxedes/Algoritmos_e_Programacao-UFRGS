#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define MI 0
#define MA 100
void maior (int mat[MAX][MAX],int n, int *valor, int *linha, int *coluna);

int main()

{
    int n = 0, mat[MAX][MAX], i, j, m = 0, linha, coluna;
    mat[n][n];

    printf("informe a ordem da matriz entre 1 e 100: ");
    scanf("%d", &n);
    printf("\n");
    srand(0);
    if (n > 0 && n < 100)
    {
        for (i = 0; i < n; i++)
        {
            for( j = 0; j < n; j++)
            {

                mat[i][j] = rand()%(MA + 1);
                printf("\t%d", mat[i][j]);


            }
            printf("\n");
        }
        printf("\n\tValor\tLinha\tColuna\n");
        do
        {
            maior(mat,n,&m,&linha,&coluna);
            if(m < 0)
                break;
            printf("\t %d\t [%d]\t [%d]\n", m, linha, coluna);
            mat[linha][coluna] =  mat[linha][coluna] * -1;
            m = m * -1;
        }
        while(m < 0);
    }
    else
        printf("Valor invalido");


    return 0;
}



void maior ( int mat[MAX][MAX],int n, int *valor, int *linha, int *coluna)
{


    for (int i = 0; i < n; i++)
    {
        for( int j = 0; j < n; j++)
        {
            if (mat[i][j] > *valor)
            {
                *valor =  mat[i][j];
                *linha = i;
                *coluna = j;
            }
        }
    }
}
























