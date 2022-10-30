#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define MI 0
#define MA 100


int main()

{
    int n = 0, mat[MAX][MAX], i, j, maior = 0, linha, coluna, menor ,aux=0,aux1;
    mat[n][n];
aux1=n*n;
    printf("informe a ordem da matriz entre 1 e 100:");
    scanf("%d", &n);
    printf("\n");

    srand(0);
    for (i = 0; i < n; i++)
    {
        for( j = 0; j < n; j++)
        {

            mat[i][j] = rand()%(MA + 1);
            printf("\t%d", mat[i][j]);


        }
        printf("\n");
    }
        do {
aux=aux++;
aux=-1+aux;
        for (i = 0; i < n; i++)
         {
          for( j = 0; j < n; j++)
        {  if (mat[i][j] > maior){
         maior =  mat[i][j];
         linha = i;
         coluna = j;}
         else if(mat[i][j] < menor){
         menor = -1 *  mat[i][j];
         }
         }}
         printf("%d\t[%d][%d]\n", maior, linha, coluna);
         mat[linha][coluna] =  mat[linha][coluna] * -1;
         maior = maior * -1;


         }
         while(maior <0&&(aux==aux1));

      return 0;
}