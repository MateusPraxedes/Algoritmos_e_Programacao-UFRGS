#include <stdio.h>
#include <string.h>
#include <ctype.h>

void maior_ocorrencia(char *str, char *c, int *freq);

int main()
{

    char str[100], ch;
    int f = 0;

    printf("Informe a string: ");
    fgets(str, 100, stdin);
    str[strlen(str)-1] = '\0';
    maior_ocorrencia(str,&ch,&f);
    printf("\nO caracter mais frequente em [%s.] eh [%c] com frequencia [%d] \n",str, ch, f);

    return 0;
}

void maior_ocorrencia(char *str, char *c, int *freq)
{

    for (int j = 0; *(str+j)!= '\0' ; ++j)
    {
        int count = 0;
        for (int i = 0; *(str+i)!= '\0' ; ++i)
        {


            if ( isalpha(*(str+i)))
            {
                if (*(str+i) == *(str+j))
                {
                    ++count;
                }
            }
        }

        if(count > *freq)
        {
            *freq = count;
            *c = *(str+j);
        }

    }
}






