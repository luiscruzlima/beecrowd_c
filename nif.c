//programa para validação do numero de identificação fiscal (NIF)
// Este programa não pertence à plataforma beecrowd
#include <stdio.h>
#include <stdlib.h>

void validacao(int n)
{
    int mult = 10, soma = 0, restoonze, temp;
    int vetornif[9], vetorconfirmacao[9];
    for (int i = 0; i < 9; i++)
    {
        vetornif[i]= n % mult;
        mult *= 10;
    }
    printf("Numero de controlo = %d\n", vetornif[0]);
    mult = 1;
    for (int i = 0; i < 9; i++)
    {
        vetorconfirmacao[i] = (vetornif[i]-vetornif[i-1])/mult;
        mult *= 10;
    }
    for (int i = 1; i < 9; i++)
    {
        //printf("o novo vet(%d) = %d\n", i, vetorconfirmacao[i]);
        //vetornif[i] *= i+1;
        temp = vetorconfirmacao[i] * (i+1);
        //soma += vetorconfirmacao[i] * (i+1);
        soma += temp;
        printf("soma = %d\n", vetornif[i]);
    }
    restoonze = soma % 11;
    printf("soma = %d , resto = %d\n", soma, restoonze);

    if (restoonze == 0 || restoonze == 1)
    {
        if (vetornif[0]==0)
        {
            printf("NIF válido.\n");
        }
        else
        {
            printf("NIF inválido!\n");
        }
    }
    else
    {
        if (vetornif[0] == 11-restoonze)
        {
            printf("NIF válido.\n");
        }
        else
        {
            printf("NIF inválido!\n");
        }
    }
}


int main()
{
    int nif;
    int confirmacao = 0;
    do
    {
        printf("Introduza o numero de contribuinte que quer validar: ");
        scanf("%d", &nif);
        if (nif > 999999999 || nif < 100000000)
        {
            confirmacao = 1;
            printf("Numero introduzido incorreto!\n");
        }
        else
            confirmacao = 0; 
    } while (confirmacao);
    validacao(nif);
}
