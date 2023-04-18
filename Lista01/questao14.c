#include <stdio.h>
#include "questao14.h"

void entrada14(int* num)
{
    printf("digite um numero: ");
    scanf("%d", num);
}

void processamento14(int* num, char* condition)
{
    *condition = *num%2;
}

void saida14(char* condition)
{
    if (*condition) { printf("numero e impar"); }
    else { printf("numero e par"); }
}

void questao14(void)
{
    int num;
    char condition;
    
    entrada14(&num);
    processamento14(&num, &condition);
    saida14(&condition);
}