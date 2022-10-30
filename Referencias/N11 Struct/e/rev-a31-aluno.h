#include <stdio.h>
#include <string.h>
#define NRNOTAS 3  // número de notas
struct aluno {
  char nome[15 + 1];
  float nota[NRNOTAS];
  float media;
  char conceito;
};
struct aluno le (void);
void mostra (struct aluno aluno);
struct aluno def_media (struct aluno aluno);
struct aluno def_conceito (struct aluno aluno);
