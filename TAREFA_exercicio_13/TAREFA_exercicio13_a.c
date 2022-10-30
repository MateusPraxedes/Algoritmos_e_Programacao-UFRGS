#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linha, coluna, max,  r, g, b, media;
    int i = 0, j = 0;
    char tipo;

    FILE *arquivo_saida = NULL;
    FILE *arquivo_entrada = fopen("feep.ascii.ppm","r");
    arquivo_saida = fopen("feep.ascii.pgm", "w");
    if(arquivo_entrada == NULL || arquivo_saida == NULL)
    {
        printf("Erro na abertura dos arquivos de entrada e saida.\n");
    }
    else
    {
        fscanf(arquivo_entrada, " %s %d %d %d ",&tipo, &linha, &coluna, &max);
        fprintf(arquivo_saida,"P2\n" );
        fprintf(arquivo_saida, "%d %d \n%d\n", linha, coluna, max);

        for(i = 0; i < linha ; i++)
        {
            for(j = 0; j < coluna; j++)
            {
                fscanf(arquivo_entrada, "%d %d %d ", &r, &g, &b);
                media = (r + g + b) / 3;
                fprintf (arquivo_saida, " %d ", media);
            }
            fprintf(arquivo_saida, "\n" );
        }

        fclose(arquivo_entrada);
        fclose(arquivo_saida);

    }

    printf("Arquivo feep.ascii.pgm gerado com sucesso!");

    return 0;
}
