/*O maior 1013*/
#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b)
{
    return (a+b+abs(a-b))/2;
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int resultado = maior(a, maior(b,c));
    printf("%d eh o maior\n", resultado);
    return 0;
}