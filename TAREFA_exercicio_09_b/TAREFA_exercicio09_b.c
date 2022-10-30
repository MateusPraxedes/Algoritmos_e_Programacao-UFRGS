#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fatorial(int n);

int main()
{
    int n, f;

    do
    {
        printf("informe um numero: ");
        scanf("%d", &n) ;
        if(n >= 0)
        {
            f = fatorial(n);
            printf("\nO fatorial %d e igual a: %d\n", n, f);
        }
        else
            printf("\nNumero invalido ( numero >= 0 )\n");
        printf("\n");
    }
    while(n < 0);


    return 0;
}



int fatorial(int n)
{

    int fat = 1;

    for(fat = 1; n > 1; n -= 1)
    {
        fat *= n;
    }


    return fat;
}





