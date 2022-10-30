/* Programa que fornece o tamanho do tipo */
#include <stdio.h>
int main ()
{
  printf ("char     = %d\n", sizeof(char));
  printf ("int      = %d\n", sizeof(int));
  printf ("unsigned int      = %d\n", sizeof(unsigned int));
  printf ("long int = %d\n", sizeof(long int));
  printf ("float    = %d\n", sizeof(float));
  printf ("double   = %d\n", sizeof(double));
  printf ("long double   = %d\n", sizeof(long double));
  return 0;
}
