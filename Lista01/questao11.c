#include <stdio.h>
#include "questao11.h"

void entrada11(int* num)
{
    printf("digite um numero (>100 e <500 para sair): ");
    scanf("%d", num);
}

void processamento11(int* num, char* condition)
{
    if (*num>100 && *num<500) { *condition = 0; }
}

void saida11(void) { printf("alerta!"); }

void questao11(void)
{
    int num;
    char condition = 1;
    while (condition)
    {
        entrada11(&num);
        processamento11(&num, &condition);
    }
    saida11();
}