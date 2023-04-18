#include <stdio.h>
#include "questao23.h"

void entrada23(float* dist, char* ty)
{
    printf("digite o tamanho do percurso: ");
    scanf("%f", dist);
    printf("digite o tipo do carro (A, B ou C): ");
    scanf(" %c", ty);
}

void processamento23(float* dist, char* ty, float* ltrs)
{
    switch (*ty)
    {
        case 'A':
            *ltrs = *dist/8;
        break;
        
        case 'B':
            *ltrs = *dist/9;
        break;
        
        case 'C':
            *ltrs = *dist/12;
        break;
    }
}

void saida23(float* ltrs) { printf("consumo estimado: %.2fL", *ltrs); }

void questao23(void)
{
    char ty;
    float dist, ltrs;

    entrada23(&dist, &ty);
    processamento23(&dist, &ty, &ltrs);
    saida23(&ltrs);    
}