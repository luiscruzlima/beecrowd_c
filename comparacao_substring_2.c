/*comparação de subtring 1237*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSTR 50

int compara(char *s1, char *s2)
{
    char *stringcomum = NULL;
    int tamanho = 0;
    stringcomum = strstr(s1, s2);
    
    while(*stringcomum !='\0')
    {
        tamanho++;
        stringcomum++;
    }
    return tamanho;
}

int main()
{
    char str1[MAXSTR], str2[MAXSTR];
    gets(str1);
    gets(str2);
    if (strlen(str1)>=strlen(str2))
    {
        printf("%d\n", compara(str1, str2));
    }
    else
    {
        printf("%d\n", compara(str2, str1));
    }
    return 0;
}