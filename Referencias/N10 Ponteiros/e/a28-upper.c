#include <stdio.h>
void nosso_upper (char str[])  {
  int i = 0; //contador inicializado na primeira posicao da string
  while(str[i] != '\0') {
    str[i] = toupper(str[i]);
    i++;
  }
}

void nosso_upper_v2 (char str[])  {
  while(*str != '\0'){
    *str = toupper(*str);
    str++;
  }
}
