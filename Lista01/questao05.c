#include <stdio.h>
#include "questao05.h"

void entrada05(float* sal, int* deps)
{
    printf("digite o salario: ");
    scanf("%f", sal);
    printf("digite o numero de dependentes: ");
    scanf("%d", deps);
}

void processamento05(float* sal, int* deps, float* liq)
{
    *liq = (*sal + *deps*32)*0.725;
}

void saida05(float* liq){ printf("salario liquido: %f\n", *liq); }

void questao05(void)
{
    float sal, liq;
    int deps;
    
    entrada05(&sal, &deps);
    processamento05(&sal, &deps, &liq);
    saida05(&liq);
}