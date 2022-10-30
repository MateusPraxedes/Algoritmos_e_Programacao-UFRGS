#include "rev-a31-aluno.h"
void limpa_buffer() {
  char c;
  while ((c = getchar()) != '\n' && c != EOF);
}
struct aluno le (void) {
  struct aluno ret = {0};
  int i;
  printf("Nome: ");
  fgets(ret.nome, 15, stdin);
  ret.nome[strlen(ret.nome)-1] = '\0';
  for (i = 0; i < NRNOTAS; i++){
    printf("Nota %d: ", i);
    scanf("%f", &ret.nota[i]); limpa_buffer();
  }
  return ret;
}

void mostra (struct aluno aluno) {
  int j;
  printf("Aluno \'%s\' (Notas: ", aluno.nome);
  for (j = 0; j < NRNOTAS; j++) {
    printf("%.2f", aluno.nota[j]);
    if (j+1 < NRNOTAS) printf(" ");
  }
  printf(")");
  if (aluno.media > 0) {
    printf(" Média: %.2f", aluno.media);
  }
  if (aluno.conceito != '\0') {
    printf(" Conceito: %c", aluno.conceito);
  }
  printf("\n");
  return;
}

struct aluno def_media (struct aluno aluno) {
  int i;
  aluno.media = 0;
  for (i = 0; i < NRNOTAS; i++){
    aluno.media += aluno.nota[i];
  }
  aluno.media /= NRNOTAS;
  return aluno;
}

struct aluno def_conceito (struct aluno aluno) {
  if (aluno.media > 0 && aluno.media < 6.0) {
    aluno.conceito = 'D';
  }else if (aluno.media >= 6.0 && aluno.media < 7.5) {
    aluno.conceito = 'C';
  }else if (aluno.media >= 7.5 && aluno.media < 8.5) {
    aluno.conceito = 'B';
  }else if (aluno.media >= 8.5) {
    aluno.conceito = 'A';
  }else {
    aluno.conceito = '\0';
  }
  return aluno;
}
