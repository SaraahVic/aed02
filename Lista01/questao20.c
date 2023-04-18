#include <stdio.h>
#include "questao20.h"

void entrada20(float* first, float* second, float* third)
{
    printf("digite o primeiro numero: ");
    scanf("%f", first);
    printf("digite o segundo numero: ");
    scanf("%f", second);
    printf("digite o terceiro numero: ");
    scanf("%f", third);
}

void processamento20(float* first, float* second, float* third, char** result)
{
    if (*first == *second && *second == *third) { *result = "Números idênticos"; }
    else if (*first == *second)
    {
        if (*second > *third) { *result = "o primeiro e o segundo sao iguais, e sao maiores que o terceiro"; }
        else { *result = "o terceiro e o maior numero"; }
    }
    else if (*first == *third)
    {
        if (*second > *third) { *result = "o segundo e o maior numero"; }
        else { *result = "o primeiro e o terceiro sao iguais, e sao maiores que o segundo"; }
    }
    else if (*second == *third)
    {
        if (*first > *third) { *result = "o primeiro e o maior numero"; }
        else { *result = "o segundo e o terceiro sao iguais, e sao maiores que o primeiro"; }
    }
    else if (*first>*second)
    {
        if (*first>*third) { *result = "o primeiro e o maior numero"; }
        else { *result = "o terceiro e o maior numero"; }
    }
    else
    {
        if (*second>*third) { *result = "o segundo e o maior numero"; }
        else { *result = "o terceiro e o maior numero"; }
    }
}

void saida20(char** result) { printf(*result); }

void questao20(void)
{
    float first, second, third;
    char* res;

    entrada20(&first, &second, &third);
    processamento20(&first, &second, &third, &res);
    saida20(&res);
}