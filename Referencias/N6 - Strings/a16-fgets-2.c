#include <stdio.h>
int main(){
  char str[5];
  fgets(str, 5, stdin);
  printf("->[%s]<-\n", str);
  return 0;
}
