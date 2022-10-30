#include <stdio.h>
#include "rev-a31-aluno.h"
#define NRALUNOS 3 // número de alunos da turma
int main()
{
  struct aluno alunos[NRALUNOS] = {0};
  int i, j;
  for (i = 0; i < NRALUNOS; i++) {
    alunos[i] = le();
    mostra(alunos[i]);
  }
  for (i = 0; i < NRALUNOS; i++) {
    alunos[i] = def_media(alunos[i]);
    mostra(alunos[i]);
  }
  for (i = 0; i < NRALUNOS; i++) {
    alunos[i] = def_conceito(alunos[i]);
    mostra(alunos[i]);
  }
  return 0;
}
