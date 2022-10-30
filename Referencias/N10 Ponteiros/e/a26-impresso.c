#include <stdio.h>
int main() {
  int x[] = {2, 4};
  int *px;

  px = &x[0];
  printf("1# *px (%p) = %d\n", px, *px);
  px = px + 1;
  printf("2# *px (%p) = %d\n", px, *px);
  px = px + 1;
  printf("3# *px (%p) = %p\n", px, *px);
  return 0;
}
