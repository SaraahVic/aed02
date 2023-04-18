#include <stdio.h>
#include "questao04.h"

void entrada04(float* salary, float* raise_percentage)
{
    printf("digite o salario atual: ");
    scanf("%f", salary);
    printf("digite a porcentagem de aumento: ");
    scanf("%f", raise_percentage);
}

void processamento04(float* old_salary, float* raise_percentage, float* new_salary)
{
    *new_salary = (*old_salary*(*raise_percentage))/100;
}

void saida04(float* salary){ printf("salario apos aumento: %f", *salary); }

void questao04(void)
{
    float old_salary, raise_percentage, new_salary;
    entrada04(&old_salary, &raise_percentage);
    processamento04(&old_salary, &raise_percentage, &new_salary);
    saida04(&new_salary);
}