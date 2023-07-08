/*soma de fatoriais 1161*/
#include <stdio.h>

unsigned long long int fatorial(long long int n)
{
    unsigned long long int fact =1;
    if (n == 0)
    {
        fact = 1;
    }
    else
    {
        for (unsigned long long int i = 2; i <=n; i++)
        fact *= i;
    }
    return fact;
}

int main()
{
    unsigned long long int a, b, soma;

    while (scanf("%lld %lld", &a, &b) != EOF)
    {
        soma = fatorial(a) + fatorial(b);
        printf("%lld\n", soma);
    }
}