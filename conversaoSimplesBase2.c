#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 20

/*conversão de hexadecimal para decimal*/
void hex_dec(char num[])
{
    long long int decimal = 0, base = 1;
    int valor, comprimento;
    comprimento = strlen(num);
    // printf("%d", comprimento);
    for (int i = comprimento - 1; i > 1; i--)
    {
        /*os caracteres de 0 a 9 tem o valor ascii decimal entre 48 e 57,
          os caracteres de A a F tem o valor ascii decimal entre 65 e 70,
          os caracteres de A a F tem o valor ascii decimal entre 97 e 102*/
        if (num[i] >= '0' && num[i] <= '9')
        {
            decimal += (num[i] - 48) * base;
            base *= 16;
        }
        else if (num[i] >= 'A' && num[i] <= 'F')
        {
            decimal += (num[i] - 55) * base;
            base *= 16;
        }
        else if (num[i] >= 'a' && num[i] <= 'f')
        {
            decimal += (num[i] - 87) * base;
            base *= 16;
        }
    }
    printf("%lld\n", decimal);
}

/*conversão de decimal para hexadecimal*/
void dec_hex(long long int num)
{
    long long int quociente, resto;
    int i, j = 0;
    char hexadecimalnum[MAX];
    quociente = num;

    while (quociente != 0)
    {
        resto = quociente % 16;
        if (resto < 10)
            hexadecimalnum[j++] = 48 + resto;
        else
            hexadecimalnum[j++] = 55 + resto;

        quociente = quociente / 16;
    }

    // apresentação dos resultados
    printf("0x");
    for (i = j-1; i >= 0; i--)
        printf("%c", hexadecimalnum[i]);
    printf("\n");
}

int main()
{
    char valorInicial[MAX];
    do
    {
        fgets(valorInicial, MAX, stdin);
        
        if (valorInicial[0] != '-')
        {
            if (valorInicial[0] == '0' && valorInicial[1] == 'x')
            {
                /*função converte hexadecimal em decimal*/
                hex_dec(valorInicial);
            }
            else
            {
                /*função converte decimal em hexadecimal*/
                long long int x = atoi(valorInicial);
                dec_hex(x);
            }
        }
    } while (valorInicial[0] != '-');
    return 0;
}