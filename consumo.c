/*Consumo 1014*/
#include <stdio.h>

int main()
{
    int km;
    double lts, consumo;
    scanf("%d", &km);
    scanf("%lf", &lts);
    consumo = km / lts;
    printf("%.3lf km/l\n", consumo);
}