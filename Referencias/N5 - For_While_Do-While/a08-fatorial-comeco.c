#include <stdio.h>
int main () {
  int num, fat, i, resposta;




  for (i = 0; i < numero; i++){
    //não devemos alterar o valor de número
  }























  
  do {
  
    do {
      printf("Entre um numero inteiro positivo: " );
      scanf("%d", &num);
      if (num < 0){
	printf("Este número (%d) é negativo. Digite inteiro positivo.\n", num);
      }
    }while (num < 0);

    fat = 1; // se for zero, está pronto
    for (i = 0; i <= num; i++) {
      if (i != 0) {
	fat = fat * i;
      }
    }
    printf ("Fatorial de %d eh %d\n", i-1, fat);

    printf ("Quer calcular o fatorial de outro número?\n"
	    "(digite 1 para sim, 0 para não)\n");
    scanf("%d", &resposta);
    
  }while(resposta == 1);
  
  return 0;
}
