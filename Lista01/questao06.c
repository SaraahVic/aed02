#include <stdio.h>
#include "questao06.h"

void entrada06(float* old, float* new)
{
    printf("digite o valor antigo: ");
    scanf("%f", old);
    printf("digite o valor novo: ");
    scanf("%f", new);
}

void processamento06(float* old, float* new, float* raise)
{
    *raise = (*new-*old) / *old*100;
}

void saida06(float* raise){ printf("porcentagem de aumento: %.2f%%", *raise); }

void questao06(void)
{
    float old, new, raise;
    
    entrada06(&old, &new);
    processamento06(&old, &new, &raise);
    saida06(&raise);
}