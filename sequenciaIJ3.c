/*sequencia ij3 - 1097*/
#include<stdio.h>

int main()
{
    int i = 1;
    while (i < 10)
    {
        for (int n = 6; n >= 4; n--)
        {
            printf("I=%d J=%d\n", i, i+n);
        }
        i +=2;  
    }
    return 0;
}