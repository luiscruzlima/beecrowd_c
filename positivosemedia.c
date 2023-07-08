#include <stdio.h>

int main()
{
    int nPositivos = 0;
    float media = 0, soma = 0, num;
    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &num);
        if (num >= 0)
        {
            nPositivos++;
            soma += num;
        }
    }
    media = soma / nPositivos;
    printf("%d valores positivos\n", nPositivos);
    printf("%.1f\n", media);
    return 0;
}