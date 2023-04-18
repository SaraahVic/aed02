#include <stdio.h>
#include "questao16.h"

void entrada16(float* sal)
{
    printf("digite o salario bruto: ");
    scanf("%f", sal);
}

void processamento16(float* sal, float* liq)
{
    if (*sal < 2000) { *liq=*sal*0.9; }
    else { *liq = *sal*0.8; }
}

void saida16(float* liq) { printf("salario liquido: %f", *liq); }

void questao16(void)
{
    float sal, liq;
    
    entrada16(&sal);
    processamento16(&sal, &liq);
    saida16(&liq);
}