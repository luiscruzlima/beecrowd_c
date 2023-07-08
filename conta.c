/*conta 1866*/
#include <stdio.h>

int contaFuncao(int n_calcular)
{
    if (n_calcular%2==0)
        return 0;
    else
        return 1;
}

void mostraResultados(int n_interacoes)
{
    int n_intr;
    for (int i = 0; i < n_interacoes; i++)
    {
        scanf("%d", &n_intr);
        printf("%d\n", contaFuncao(n_intr));
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    mostraResultados(n);

}