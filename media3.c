/*Media 3 1040*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void media(double n1, double n2, double n3, double n4)
{
    double nota;
    //nota = floor(((0.2 * n1) + (0.3 * n2) + (0.4 * n3) + (0.1 * n4))*10)/10;
    nota = (2*n1+3*n2+4*n3+n4)/10;
    double notaexame, notafinal;
    printf("Media: %0.1lf\n", nota);
    if(nota >= 7.0)
        printf("Aluno aprovado.\n");
    else if(nota < 5.0)
        printf("Aluno reprovado.\n");
    else if(nota >=5 || nota <= 6.9)
        {
            printf("Aluno em exame.\n");
            scanf("%lf", &notaexame);
            printf("Nota do exame: %.1lf\n", notaexame);
            notafinal = (nota + notaexame) / 2;
            if(notafinal >= 5.0)
            {
                printf("Aluno aprovado.\n");
            }
            else if(notafinal <= 4.99)
            {
                printf("Aluno reprovado.\n");
            }
           printf("Media final: %.1lf\n", notafinal);
        }
}

int main()
{
    double n1, n2, n3, n4;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    media(n1, n2, n3, n4);
    return 0;
}
