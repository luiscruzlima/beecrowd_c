/*comparação de subtring 1237*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSTR 50

int compara(char *s1, char *s2)
{
    int cont = 0;
    while (*s1 || *s2)
    {
            if (*s1 == *s2)
            {
                s1++;
                s2++;
                cont++;
            }
            else
            {
                s2++;
            }
    }

    return cont;
}

int main()
{
    char str1[MAXSTR], str2[MAXSTR];
    gets(str1);
    gets(str2);
    printf("%d\n", compara(str1, str2));
    return 0;
}