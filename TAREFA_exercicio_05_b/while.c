#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
  int alunos = 0;
  float p1, p2, media, soma, media_turma;


   while(alunos <2){
      alunos++;
      printf("Informe a nota da p1:");
      scanf("%f", &p1);
      printf("Informe a nota da p2:");
      scanf("%f", &p2);
      media = (p1 + p2) / 2;
      soma = soma + media;


      printf("\nMedia do aluno %d : %6.2f\n", alunos, media);}


    media_turma = soma / 3;
    printf("soma das notas da turma %f e media %f ", soma, media_turma);



return 0;
}
