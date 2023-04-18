#include <stdio.h>
#include "questao13.h"

void entrada13(int* num)
{
    printf("digite um numero: ");
    scanf("%d", num);
}

void processamento13(int* num, char* condition)
{
    *condition = *num%5;
}

void saida13(char* condition)
{
    if (*condition) { printf("numero nao e divisivel por 5"); }
    else { printf("numero e divisivel por 5"); }
}

void questao13(void)
{
    int num;
    char condition;
    
    entrada13(&num);
    processamento13(&num, &condition);
    saida13(&condition);
}