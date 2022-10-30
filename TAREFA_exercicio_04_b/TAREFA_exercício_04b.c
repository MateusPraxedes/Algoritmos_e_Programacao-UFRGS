#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int idade, contador, qd_pessoas, maior, menor;
  float acumulador, media;
  qd_pessoas = 10;

   for(contador = 0; contador < qd_pessoas; contador++){
   printf("Informe a idade %d: \n", contador+1);
   scanf("%d", &idade);
   if(idade<0){
   printf("A idade nao pode ser um valor negativo \n");
   break;}
   if(contador==0){
    maior = idade;
    menor = idade;}
    else if (idade > maior){
        maior = idade;}
    else if (idade < menor){
        menor = idade;}
   acumulador += idade;}
   media = acumulador / qd_pessoas;
    if (idade > 0){
     printf("idade media: %f \n", media);
     printf(" maior idade: %d  menor idade: %d \n", maior, menor);}

  return 0;
}