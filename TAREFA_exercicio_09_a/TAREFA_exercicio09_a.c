#include <stdio.h>
#include <stdlib.h>
void menu_incial();
int somatorio ();
int produtorio();


int main()
{
    int numero, s, p;

    do
    {
        menu_incial();
        printf("Informe a opcao desejada:\n");
        scanf("%d", &numero);
        if (numero == 1)
        {
            s = somatorio();
            printf("\nResultado: %d\n", s);
        }
        else if(numero == 2)
        {
            p = produtorio();
            printf("\nResultado: %d\n", p);
        }
        else
            printf("\nOpcao invalida\n", p);
        printf("\n");
    }
    while(numero < 1 || numero > 2 );
    do
    {
        printf("\n");
        s = 0;

        p = 0;
        menu_incial();
        printf("3- Sair\n");
        printf("Informe a opcao desejada:\n");
        scanf("%d", &numero);
        if (numero == 1)
        {
            s = somatorio();
            printf("\nResultado: %d\n", s);
        }
        else if(numero == 2)
        {
            p = produtorio();
            printf("\nResultado: %d\n", p);
        }
        else if(numero != 3)
            printf("\nOpcao invalida\n", p);
    }
    while(numero!=3);

    return 0;
}

void menu_incial()
{

    printf("1- Somatorio\n");
    printf("2- Produtorio\n");

}

int somatorio()
{
    int  s, resultado = 0;

    do
    {
        printf("informe um numero:");
        scanf("%d", &s);
        resultado += s;

    }
    while(s != 0);

    return resultado;
}



int produtorio()
{
    int  p, resultado = 1;


    do
    {
        printf("informe um numero:");
        scanf("%d", &p);
        if ( p > 0 )
        {
            resultado *=  p;

        }
    }
    while(p != 0);

    return resultado;
}








