#include <stdio.h>
struct {
  int codigo;
  float salario;
} professor = { 12, 34.5 };

typedef struct {
  int codigo;
  float salario;
} professor_t;

int main(){
  professor_t p;
  printf("%d %f\n",
	 professor.codigo,
	 professor.salario);
  return 0;
}
