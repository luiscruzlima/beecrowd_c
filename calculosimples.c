/*Calculo simples, problema 1010*/
#include <stdio.h>

int main()
{
    int cod1, cod2, num1, num2;
    float preco1, preco2, totalfinal;
    scanf("%d %d %f", &cod1, &num1, &preco1);
    scanf("%d %d %f", &cod2, &num2, &preco2);
    totalfinal = (num1*preco1)+(num2*preco2);
    printf("VALOR A PAGAR: R$ %.2f\n", totalfinal);
    return 0;
}