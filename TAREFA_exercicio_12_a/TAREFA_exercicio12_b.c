#include <stdio.h>
#include <stdio.h>
#include <string.h>
#define MAX 50
#define CONTAS "contas.bin"

typedef struct
{
    int numero;
    char nome[40];
    float saldo;
} conta_t;

long buscar_conta(conta_t *t);
void  saque(conta_t *t, long pos, float x);
void  deposito(conta_t *t, long pos, float x);
void  leitura(conta_t *t);

int main()
{
    conta_t contas_salvas;

    int n;
    long pos;
    float x;


    do
    {
        printf("Informe a operacao desejada:\n");
        printf("[1] Saque\n");
        printf("[2] Deposito\n");
        printf("[3] Encerrar\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            buscar_conta(&contas_salvas);
            saque(&contas_salvas, pos,x);
            printf("-----------------------------\n");
            printf("Numero = %d\nCorrentista:%s\nSaldo:%f\n",contas_salvas.numero,contas_salvas.nome,contas_salvas.saldo);
            printf("-----------------------------\n");
            break;

        case 2:
            buscar_conta(&contas_salvas);
            deposito(&contas_salvas,pos,x);
            printf("-----------------------------\n");
            printf("Numero = %d\nCorrentista:%s\nSaldo:%f\n",contas_salvas.numero,contas_salvas.nome,contas_salvas.saldo);
            printf("-----------------------------\n");

            break;
        case 3:
            clrscr(); // Limpar a tela
            break;
        default:
            printf("opcao invalida");
        }

    }

    while(n!=3);


    return 0;


}

long buscar_conta(conta_t *t)
{



    int n, max = 0;
    long pos;
    printf("Informe o numero da conta:");
    scanf("%d", &n);
    FILE *arquivo = fopen("contas.bin", "rb");
    while(!feof(arquivo))
    {
        pos = ftell(arquivo);
        fread(&max, sizeof(int), 1, arquivo);
        fread(t, sizeof(conta_t),1, arquivo);
        if(t->numero == n)
        {
            fclose(arquivo);
            return pos;
        }

    }
}


void  saque(conta_t *t, long pos, float x)
{
    float y = 0;
    int max = 0;
    FILE *arquivo = fopen("contas.bin", "rb+");
    fseek(arquivo,pos, SEEK_SET);
    fread(&max, sizeof(int), 1, arquivo);
    fread(t, sizeof(conta_t),2, arquivo);
    y = t->saldo - x;
    fseek(arquivo,3, SEEK_CUR);
    fwrite(&y, sizeof(float),1,arquivo);
    fclose(arquivo);
    printf("%f\n", y);
}


void  deposito(conta_t *t, long pos, float x)
{
    float y = 0;
    int max = 0;
    FILE *arquivo = fopen("contas.bin", "rb+");
    fseek(arquivo,pos, SEEK_SET);
    fread(&max, sizeof(int), 1, arquivo);
    fread(t, sizeof(conta_t),2, arquivo);
    y = t->saldo + x;
    fseek(arquivo,3, SEEK_CUR);
    fwrite(&y, sizeof(float),1,arquivo);
    fclose(arquivo);
    printf("%f\n", y);
}





