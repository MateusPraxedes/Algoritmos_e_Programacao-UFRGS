#include <stdio.h>

struct elemento {
  double atomic_weight;
  int atomic_number;
  char name[2];
  char metallic;
};

int main() {
  printf ("%d\n", sizeof(struct elemento));
  return 0;
}
