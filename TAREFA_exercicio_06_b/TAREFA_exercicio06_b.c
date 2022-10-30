#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[61];
    int len, i = 0, j = 0;
    printf("informe o nome completo(max 60 caracteres) do autor do gol contra:");
    fgets(nome,61,stdin);
    nome[strlen(nome)-1] = '\0';
    len = strlen(nome);
    while(nome[i]!= ' ' && nome[i]!='\0' )
    {
        i++;
    }
    if ( i == 0){
    while(nome[i]!= '\0'){
     i++;
    }
     for(int j = i ; j>=0; j--)
    {
        printf("%c", nome[j]);
    }
    printf("\n");
    printf("O nome completo <%s> tem %d caracteres", nome, len);}

    else {
    printf("%d",i);
    printf("o nome invertido e:");

    for(int j = i ; j>=0; j--)
    {
        printf("%c", nome[j]);
    }

    printf("\n");
    printf("O nome completo <%s> tem %d caracteres", nome, len);}



    return 0;
}
