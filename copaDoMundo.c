/*copa do mundo 2376*/
#include <stdio.h>

#define maior(a,b)(a>b?1:2)

void avaliacao()
{
    int resultado1, resultado2;
    char equipas[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'};
    char quartos_final[8];
    char meias_final[4];
    char final[2];
    char vencedor;
    for (int i = 0; i < 8; i++)
    {
        scanf("%d %d", &resultado1, &resultado2);
        if (maior(resultado1,resultado2)==1)
        {
            quartos_final[i]=equipas[2*i];
        }
        else
        {
            quartos_final[i]=equipas[2*i+1];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        scanf("%d %d", &resultado1, &resultado2);
        if (maior(resultado1,resultado2)==1)
        {
            meias_final[i]=quartos_final[2*i];
        }
        else
        {
            meias_final[i]=quartos_final[2*i+1];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        scanf("%d %d", &resultado1, &resultado2);
        if (maior(resultado1,resultado2)==1)
        {
            final[i]=meias_final[2*i];
        }
        else
        {
            final[i]=meias_final[2*i+1];
        }
    }
    scanf("%d %d", &resultado1, &resultado2);
    if (maior(resultado1,resultado2)==1)
    {
        vencedor = final[0];
    }
    else
    {
        vencedor = final[1];
    }
    printf("%c\n", vencedor);
}

int main()
{
    avaliacao();
}