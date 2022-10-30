#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
#define CONTAS "contas.bin"
typedef struct
{
    int numero;
    char nome[40];
    float saldo;
} conta_t;

void  leitura(conta_t *t);

int main()
{
    conta_t contas[MAX] = {0};
    conta_t contas_salvas[MAX] = {0};

    int i = 0, n, j = 0, k = 0;
    int max = MAX;


    do
    {
        printf("Informe o numero da conta: ");
        scanf("%d", &contas[i].numero);
        fgetc(stdin);
        printf("Informe o nome do correntista: ");
        fgets(contas[i].nome,40,stdin);
        contas[i].nome[strlen(contas[i].nome)-1] = '\0';
        printf("Informe o saldo atual da conta: ");
        scanf("%f", &contas[i].saldo);
        fgetc(stdin);
        printf("Deseja informar mais um conta? [1]SIM  [2]NAO: ");
        scanf("%d", &n);
        if (n == 1)
        {
            i++;
        }
        else if(n != 2)
            printf("\nOpcao invalida\n");
    }

    while(n!=2);

    printf("\nSalvei %d contas!\n", i+1);

    FILE *arquivo = fopen(CONTAS, "w");
    if (arquivo)
    {
        fwrite(&max, sizeof(int), 1, arquivo);
        fwrite(&contas, sizeof(conta_t), max, arquivo);
        fclose(arquivo);
    }
    else
    {
        printf("Impossvel de abrir arquivo [%s]. Fatal.\n", CONTAS);

    }


     leitura(contas_salvas);



     for (k = 0 ; k <= i; k++)
    {
        printf("-----------------------------\n");
        printf("Numero: %d\nCorrentista: %s\nSaldo: %f\n",contas_salvas[k].numero,contas_salvas[k].nome,contas_salvas[k].saldo);
        printf("-----------------------------\n");


    }


  return 0;
}

void  leitura(conta_t *t)
{
    int max = 0;
    FILE *arquivo = fopen(CONTAS, "rb");
    if (arquivo)
    {
        fread(&max, sizeof(int), 1, arquivo);
        fread(t, sizeof(conta_t),max, arquivo);
        fclose(arquivo);
    }
    else
    {
        printf("Impossível de abrir arquivo [%s] para leitura. Fatal.\n", CONTAS);
    }

}





