void nosso_upper (char *str){
  while(*str != '\0') {
    *str = toupper(*str);
    str++;
  }
}
