/*tridu 1933*/
#include <stdio.h>

void melhorOpcao(int n, int m)
{
    if (n > m)
    {
        printf("%d\n", n);
    }   
    else if (n < m)
    {
        printf("%d\n", m);
    }
    else
    {
        printf("%d\n", m);
    }
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    melhorOpcao(n, m);
    return 0;
}