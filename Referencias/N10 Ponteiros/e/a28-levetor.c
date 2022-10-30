#include <stdio.h>
#define TAM 3

void le_vetor(float *vetor, int num_vet) { //leitura de um vetor de floats
  int i; // variável local, para auxiliar leitura
  printf("Entre os %d valores do vetor, separados por espaços\n",num_vet);
  for (i = 0; i < num_vet; i++)
    scanf("%f",&vetor[i]);
  return;
}

int main() {
  int i; //contador
  float vec[TAM];
  printf("leitura de %d elementos \n", TAM);
  le_vetor(vec, TAM);  //<-- veja a chamada da função
  for (i = 0; i < TAM; i++) // escrita do vetor
    printf("%.2f ", vec[i]);
  printf("\n");
  return 0;
}
