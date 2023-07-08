/*triangulos e poligons regulares, 2058*/
#include <stdio.h>

int numeroLados(int n)
{
    return n-2;
}

int main()
{
    int n;//variavel para guardar o numero de lados de um poligono
    scanf("%d", &n);
    printf("%d\n", numeroLados(n));
    return 0;
}