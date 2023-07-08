#include<stdio.h>

void collatz(int n)
{
    int npassos = 0;
    while (n !=1)
    {
        if (n%2 == 0)
        {
            n /=2;
            printf("%d\n", n);
        }
        else
        {
            n = n*3+1;
            printf("%d\n", n);
        }
        npassos++; 
    }
    printf("Numero de passos: %d\n", npassos);
}

int main()
{
    int npassos = 0, n;
    printf("Introduza um numero e calcularei quantos ciclos leva até chegar a 1: ");

    scanf("%d", &n);
    collatz(n);
    return 0;
}