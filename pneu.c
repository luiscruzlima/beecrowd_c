#include<stdio.h>

int pressao (int valor1, int valor2)
{
    return valor1-valor2;
}
int main()
{
    int N, M;
    scanf("%d", &N);
    scanf("%d", &M);

    printf("%d\n", pressao(N,M));
    return 0;
}