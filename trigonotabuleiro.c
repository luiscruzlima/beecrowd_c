/*trigo no tabuleiro 1169*/

#include <stdio.h>

int powerOf(int base, int expoente)
{
    int resultado = 1;
    for (expoente; expoente > 0; expoente--)
    {
        resultado = resultado * base;
    }
    return resultado;
}

int calculoTabuleiro(int n)
{
   return powerOf(2, n) / 12000;
}

int main()
{
    printf("%d\n", powerOf(2,8));
    int n_casos, n_casas_tabuleiro;
    scanf("%d", &n_casos);
    for (int i = 0; i < n_casos; i++)
    {
        scanf("%d", &n_casas_tabuleiro);
        printf("%d Kg\n", calculoTabuleiro(n_casas_tabuleiro));
    }
  return 0;  
}