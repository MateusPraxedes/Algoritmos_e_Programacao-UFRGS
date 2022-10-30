#include <stdio.h>
#include <string.h>

typedef struct
{
    char time[15];
    int vitorias;
    int empates;
    int derrotas;
    int gols_feitos;
    int gols_sofridos;
    int saldo_de_gols;
    int potuacao;
} time_t;


void ler (time_t *t);


int main()
{
    time_t  times[5] = {0};

    for (int i = 0 ; i < 5; i++)
    {
        ler(&times[i]);

    }

    return 0;
}


void ler (time_t *t)
{
    char c;

    printf("Informe o nome do time: ");
    fgets (t->time, 15, stdin);
    t->time[strlen(t->time)-1] = '\0';
    printf("Informe o numero de vitorias: ");
    scanf("%d", &t->vitorias);
    printf("Informe o numero de empates: " );
    scanf("%d", &t->empates);
    printf("Informe o numero de derrotas: ");
    scanf("%d", &t->derrotas);
    t->potuacao = (3* (t->vitorias)) + (1* (t->empates))+  (-1* (t->derrotas));
    if (t->potuacao < 0)
    {
        t->potuacao = 0;
    }
    printf("Pontuacao do time: %d \n",  t->potuacao);
    printf("Informe o numero de gols feitos: ");
    scanf("%d", &t->gols_feitos);
    printf("Informe o numero de gols sofridos: ");
    scanf("%d", &t->gols_sofridos);
    t->saldo_de_gols = t->gols_feitos - t->gols_sofridos;
    printf("Saldo de gols: %d ",  t->saldo_de_gols);
    printf("\n  \n" );
    fgetc(stdin);


}
