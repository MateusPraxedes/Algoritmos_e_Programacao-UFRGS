#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int vendedores, i = 0, j = 0, k = 0, cont =0, l =0 ;
  float valor_venda, media_vendedor, media_equipe, soma,total_venda[2000]={0},media;

  printf("Informe o numero de vendedores: \n");
  scanf("%d", &vendedores);
  for (i = 0; i <=vendedores-1; i++ ){
   do{
   printf("Informe o valor em reais de uma venda feita pelo vendedor <%d>:", i+1);
   scanf("%f", &valor_venda);
   total_venda[i]+= valor_venda;
   printf("total da venda %f\n", total_venda[i]);
   }while(valor_venda > 0) ;}
   for(j=0; j<vendedores; j++){
   soma=soma+total_venda[j];}
   media = soma/vendedores;
   for(k=0; k<vendedores; k++){
   if (total_venda[k]> media){
   printf("valor de <%d> e acima da media\n",k+1);}}
   for(l=0; l<vendedores; l++){
   if(total_venda[l]>media){
    cont++;}}
 printf("  qtd acima: %d total de vendas  media: %f %f", cont,soma, media);










return 0;
}