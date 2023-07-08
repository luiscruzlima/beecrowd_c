/*impares 1067*/
#include<stdio.h>

int main()
{
    /*apos de uma entrada de um numero imprime os impares até esse numero*/
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n ; i++)
    {
        if (i%2 != 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}