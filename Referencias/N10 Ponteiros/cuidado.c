int *minha_funcao (void) {
  int a = 123;
  return &a;
}
int *p = NULL;
p = minha_funcao();
printf("%d", *p);
