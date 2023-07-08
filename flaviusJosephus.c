/*Flavious Josephus 1030*/
#include <stdio.h>

int josephus(int n, int k)
{
    int r;
    if(n>=1)
    {
        r = (((n==1?1:josephus(n-1, k))+k-1)%n)+1;
    }
    
    return r;
}

int main()
{
    int num_casos, cont = 1, num_pessoas, salto;
    scanf("%d", &num_casos);
    do
    {
        scanf("%d %d", &num_pessoas, &salto);
        printf("Case %d: %d\n", cont, josephus(num_pessoas, salto));
        cont++;
    }while(cont <= num_casos);

    return 0;
}