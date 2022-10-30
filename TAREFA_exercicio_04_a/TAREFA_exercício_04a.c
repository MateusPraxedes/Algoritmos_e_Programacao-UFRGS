#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int dia, mes, ano;

  printf("Informe o dia:  \n");
  scanf ("%d", &dia);
  printf("Informe o mes:  \n");
  scanf ("%d", &mes);
  printf("Informe o ano:  \n");
  scanf ("%d", &ano);

  if (dia <= 0 || ano <= 0){
    printf("Erro: dia e ano devem ser maiores que 0! \n");}
    else
    switch (mes) {
    case 1:
     printf("%d de janeiro de %d", dia, ano);
    break;
    case 2:
       printf("%d de fevereiro de %d", dia, ano);
    break;
    case 3:
      printf("%d de marco de %d", dia, ano);
    break;
    case 4:
      printf("%d de abril de %d", dia, ano);
    break;
    case 5:
       printf("%d de maio de %d", dia, ano);
    break;
    case 6:
       printf("%d de junho de %d", dia, ano);
    break;
    case 7:
       printf("%d de julho de %d", dia, ano);
    break;
    case 8:
       printf("%d de agosto de %d", dia, ano);
    break;
    case 9:
       printf("%d de setembro de %d", dia, ano);
    break;
    case 10:
       printf("%d de outubro de %d", dia, ano);
    break;
    case 11:
       printf("%d de novembro de %d", dia, ano);
    break;
    case 12:
       printf("%d de dezembro de %d", dia, ano);
    break;}

    return 0;
}
