#include <stdio.h>

int mdc (int x, int y);

int main()
{
    int x, y;
    printf("Informe o valor de x e y: ");
    scanf("%d %d", &x,&y);

    printf("\nO MDC de %d e %d eh %d\n", x, y, mdc(x,y));



    return 0;
}

int mdc (int x, int y)
{
    printf("MDC(%d, %d)\n", x, y);
    if (y == 0)
        return x;
    else
        return mdc (y,x % y);
}
