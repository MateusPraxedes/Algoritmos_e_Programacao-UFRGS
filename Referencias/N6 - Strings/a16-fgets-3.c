#include <stdio.h>
int main(){
  char str[5];
  fgets(str, 5, stdin);
  str[strlen(str)-1] = '\0'; // <- AQUI
  printf("->[%s]<-\n", str);
  return 0;
}
