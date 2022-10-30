#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
  int alunos = 0;
  float p1, p2, media, soma, media_turma;
  do {
      alunos++;
      printf("\nInforme a nota da p1:\n");
      scanf("%f", &p1);
      printf("Informe a nota da p2:\n");
      scanf("%f", &p2);
      media = (p1 + p2) / 2;
      soma = soma + media;
       printf("\nMedia do aluno %d : %0.2f  ", alunos, media);
      if (media >= 9.0f && media <= 10.0f)
      printf("Conceito final: A \n");
       else if (media >= 7.6f && media <= 8.9f)
      printf("Conceito final: B \n");
       else if (media >= 6.0f && media <= 7.5f)
      printf("Conceito final: C \n");
       else if (media < 6.0f)
      printf("Conceito final: D \n");
    } while(alunos < 20);

    media_turma = soma / 20;
    printf("\nMedia da Turma %0.2f ", media_turma);

return 0;
}
