#include <stdio.h>
int main() {
  int x = 10;
  int *p = NULL;

  p = &x;
  
  *p = x;

  printf("*p = %d\n", *p);
  return 0;
}
