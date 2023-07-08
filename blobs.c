/*Blobs - 1170*/
#include <stdio.h>

void blobs(int n)
{
    double kilos;
    for (int i = 0; i < n; i++)
    {
        int dias = 0;
        scanf("%lf", &kilos);
        while (kilos > 1)
        {
            kilos = kilos / 2.0;
            dias++;
        }
        printf("%d dias\n", dias);
    }
    
}

int main()
{
    int n_testes;
    scanf("%d", &n_testes);
    blobs(n_testes);
    return 0;
}