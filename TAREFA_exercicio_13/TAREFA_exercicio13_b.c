#include<stdio.h>
#include <stdlib.h>
#include <string.h>


void negativo(char *arq_entrada);
void sepia (char *arq_entrada);

int main (){
char arq_entrada [40];

  printf("Informe o nome do arquivo: ");
  fgets(arq_entrada, 40, stdin);
  arq_entrada[strlen(arq_entrada)-1] = '\0';
  negativo(arq_entrada);
  sepia(arq_entrada);

return 0;
}

void negativo(char *arq_entrada){


int linha, coluna, max, r, g, b,rn, gn, bn;
int i = 0, j = 0;
char tipo;


FILE *arquivo_entrada = fopen(arq_entrada,"r");
    if(arquivo_entrada == NULL)
    {
        printf("Erro na abertura dos arquivo de entrada \n");
    }
    else
    {
      FILE * arquivo_saida1 = fopen("negativo.ppm", "w");
		  fscanf(arquivo_entrada, " %s %d %d %d ",&tipo, &linha, &coluna, &max);
		  fprintf(arquivo_saida1,"P3\n" );
		  fprintf(arquivo_saida1, "%d %d \n%d\n", linha, coluna, max);

		for(i = 0; i <= coluna-1 ; i++){
   			for(j = 0; j <= linha-1; j++) {

				fscanf(arquivo_entrada, " %d %d %d ",&r , &g , &b);
        		rn = 255 - r;
		        gn = 255 - g;
       			bn = 255 - b;
				fprintf (arquivo_saida1, "%d %d %d ", rn, gn, bn);
			}
      fprintf(arquivo_saida1, "\n" );
		}

		fclose(arquivo_entrada);
		fclose(arquivo_saida1);
}

 printf("Arquivo negativo.ppm gerado com sucesso!");


}

void sepia (char *arq_entrada){

  	int tr, tg, tb, linha, coluna, max,r, g, b;
	  int i, j;
	  char tipo;

    FILE *arquivo_entrada = fopen(arq_entrada,"r");
    if(arquivo_entrada == NULL)
    {
        printf("Erro na abertura dos arquivo de entrada \n");
    }
    else
    {
      FILE * arquivo_saida2 = fopen("sepia.ppm", "w");
		  fscanf(arquivo_entrada, " %s %d %d %d ",&tipo, &linha, &coluna, &max);
		  fprintf(arquivo_saida2,"P3\n" );
		  fprintf(arquivo_saida2, "%d %d \n%d\n", linha, coluna, max);

		  for(i = 0; i <= coluna - 1 ; i++){
   			for(j = 0; j <= linha - 1; j++) {
        fscanf(arquivo_entrada, " %d %d %d ", &r , &g , &b);

				tr = (int)(0.393 * r + 0.769 * g + 0.189 * b);
				tg = (int)(0.349 * r + 0.686 * g + 0.168 * b);
				tb = (int)(0.272 * r + 0.534 * g + 0.131 * b);

				if (tr > 255){
					tr = 255;
				}

				if (tg > 255){
					tg = 255;
				}

				if (tb > 255){
					tb = 255;
				}

				fprintf (arquivo_saida2, " %d %d %d \n ", tr, tg, tb);
			}

		}

		fclose(arquivo_entrada);
		fclose(arquivo_saida2);
    }
printf("\nArquivo sepia.ppm gerado com sucesso!");
}









