#include <stdio.h>
#include "questao09.h"

void entrada09(int* num)
{
    printf("digite um numero (>100 para parar): ");
    scanf("%d", num);
}

void processamento09(int* num, char* condition) { if (*num>100) { *condition=0; } }

void saida09(void) { printf("alerta!"); }

void questao09(void)
{
    int num;
    char condition = 1;
    while (condition)
    {
        entrada09(&num);
        processamento09(&num, &condition);
    }
    saida09();
}