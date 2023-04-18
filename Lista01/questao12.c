#include <stdio.h>
#include "questao12.h"

void entrada12(float notas[2])
{
    for (int i=0;i<2;i++)
    {
        printf("digite a notas %d: ", i+1);
        scanf("%f", &notas[i]);
    }
}

void processamento12(float notas[2], float* mean)
{
    *mean = 0;
    for (int i=0;i<2;i++) { *mean+=notas[i]; }
    *mean/=2;
}

void saida12(float* mean)
{
    if (*mean<7) { printf("reprovado!"); }
    else { printf("aprovado!"); }
}

void questao12(void)
{
    float notas[2];
    float mean;
    
    entrada12(notas);
    processamento12(notas, &mean);
    saida12(&mean);
}