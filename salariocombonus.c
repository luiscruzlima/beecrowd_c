/*Salario com Bonus, problema 1009*/
#include <stdio.h>
#include <math.h>

#define COMISSAO 0.15

int main()
{
    char nome [50];
    float salario_base, vendas, salario_final;
    scanf("%s", nome);
    scanf("%f", &salario_base);
    scanf("%f", &vendas);

    salario_final = salario_base + (roundf((vendas * COMISSAO)*100)/100);
    printf("TOTAL = R$ %.2f\n", salario_final);
    return 0; 
}