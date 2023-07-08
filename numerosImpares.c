#include <stdio.h>
#include <stdlib.h>

void seisImpares(int n)
{
    if (n%2!=0)
    {
        for (int i = 1; i <= 6; i++)
        {
            printf("%d", n);
            n+=2;
        }
    }
    else
    {
        n++;
        for (int i = 1; i <= 6; i++)
        {
            printf("%d", n);
            n+=2;
        }
    }
}

int main()
int n;
scanf("%d", &n);
