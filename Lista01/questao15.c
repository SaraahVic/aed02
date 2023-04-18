#include <stdio.h>
#include "questao15.h"

void entrada15(float* first, float* second)
{
    printf("digite o primeiro numero: ");
    scanf("%f", first);
    printf("digite o segundo numero: ");
    scanf("%f", second);
}

void processamento15(float* first, float* second, char** msg)
{
    if (*first == *second) { *msg = "os numeros sao iguais"; }
    else if (*first>*second) { *msg = "o primeiro numero e maior"; }
    else { *msg = "o segundo numero e maior"; }
}

void saida15(char** msg) { printf(*msg); }

void questao15(void)
{
    float first, second;
    char* msg;
    
    entrada15(&first, &second);
    processamento15(&first, &second, &msg);
    saida15(&msg);
}