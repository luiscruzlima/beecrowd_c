/*Conversão simples de base 1199*/
#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX 10

/*função para determinar o tamanho da string introduzida*/
int tamanhoString(char str[])
{
    int n=0;
    while (str[n] != '\0')
    {
        n++;
    }
    return n;
}

int numero_decimal(char a[])
{
    int n = tamanhoString(a);
    int numero;
    double contador = 0;
    for (int i = n; i >= n; i--)
    {
        numero = (int)a[n] * pow(10, contador);
        contador++;
    }
    return numero;   
}

/*função para tranformar digitos decimais em hexadecimais*/
char hexadecimal(char a)
{
    switch (a)
    {
        case '1' :return '1';
        case '2' :return '2';
        case '3' :return '3';
        case '4' :return '4';
        case '5' :return '5';
        case '6' :return '6';
        case '7' :return '7';
        case '8' :return '8';
        case '9' :return '9';
        /*
        case '10' :return 'A';
        case '11' :return 'B';
        case '12' :return 'C';
        case '13' :return 'D';
        case '14' :return 'E';
        case '15' :return 'F';*/
    }
}

int potencia(int a, int p)
{
    for (int i = 0; i < p; i++)
    {
        a *= a;
    }
    return a;
}

void converte(char ent[])
{
    int tam = tamanhoString(ent);
    int hex[tam];
    /*caso os 2 primeiro caracteres sejam 0x então temos de converter um hexadecimal em decimal*/
    if (ent[0] == '0' && ent[1] == 'x')
    { 
        int num = numero_decimal(ent);
        for (int i = 0; i < tam; i++)
        {
            hex[i] = num % 16;
            num /= 16;
        }
         
        printf("Numero hexadecimal com %d caracteres\n", hex[0]);
    }
    /*caso contrario converte decimal em hexadecimal*/
    else
    {
        printf("Numero decimal com %d caracteres\n", tam);
    }   
}

int main()
{
    char valconv[MAX];
    do
    {
        scanf("%s", valconv);
        if(valconv[0] != '-')
            converte(valconv);
        
    } while (valconv[0] != '-');
    
} 