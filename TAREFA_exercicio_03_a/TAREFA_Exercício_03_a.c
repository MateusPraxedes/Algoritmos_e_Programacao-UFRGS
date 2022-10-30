#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float peso, altura, imc;
    printf("informe o peso(Kg):  \n");
    scanf("%f", &peso);
    printf("Informe a altura(m):  \n");
    scanf("%f", &altura);
    imc = peso / pow(altura,2);
    if (imc < 17)
      printf("resultado eh:%f \nsituacao: Muito Abaixo do Peso \n", imc);
      else if ( imc>= 17 && imc<= 18.49 )
       printf("resultado eh:%f \nsituacao: Abaixo do Peso \n", imc);
      else if ( imc>= 18.5 && imc<= 24.99 )
       printf("resultado eh:%f \nsituacao: Peso normal \n", imc);
      else if ( imc>= 25 && imc<= 29.99 )
       printf("resultado eh:%f \nsituacao: Acima do peso \n", imc);
      else if ( imc>= 30 &&  imc<= 34.99 )
       printf("resultado eh:%f \nsituacao: Obesidade I \n", imc);
      else if ( imc>= 35 &&  imc<= 39.99 )
       printf("resultado eh:%f \nsituacao: Obesidade II(Severa) \n", imc);
      else if (imc >= 40)
       printf("resultado eh:%f \nsituacao: Obesidade III(Morbida) \n", imc);
    
    return 0;
}
