#include <stdio.h>
#include "questao18.h"

void entrada18(float* n1, float* n2)
{
    printf("digite a primeira unidade: ");
    scanf("%f", &n1);
    printf("digite a segunda unidade: ");
    scanf("%f", &n2);
}

void processamento18(float* n1, float* n2, char** result)
{
    if ((*n1+*n2)/2 >= 7) { *result = "resultado: aprovado"; }
    else if ((*n1+*n2)/2 < 3) { *result = "resultado: reprovado"; }
    else { *result = "resultado: prova final"; }
}

void saida18(char** result) { printf(*result); }

void questao18(void)
{
    float n1, n2;
    char* result;

    entrada18(&n1, &n2);
    processamento18(&n1, &n2, &result);
    saida18(&result);
}