#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int idade;
    float peso, altura;
    printf("Informe a idade do atleta: \n");
    scanf("%d", &idade);
    printf("Informe a peso do atleta: \n");
    scanf("%f", &peso);
    printf("Informe a altura do atleta: \n");
    scanf("%f", &altura);
    if (idade < 15)
    printf("O atleta tem %d, logo e da Categoria Infantil", idade);
    else if (idade >= 15 && idade < 17)
    printf("O atleta tem %d anos,  logo e da Categoria Juvenil", idade);
    else if (idade >= 17 && idade < 20)
    printf("O atleta tem %d anos,  logo e da Categoria Juniores", idade);
    else if (idade >= 20 && idade < 23)
    printf("O atleta tem %d anos,  logo e da Categoria Olimpica", idade);
    else if (idade >= 23)
    printf("O atleta tem %d anos, nao se enquadra nas Categorias de base", idade);
   
    return 0;
}
