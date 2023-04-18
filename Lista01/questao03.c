#include <stdio.h>
#include "questao03.h"

void entrada03(float numbers[2], float weights[2])
{
    for (int i=0; i<2; i++)
    {
        printf("\ndigite a nota %d: ", i+1);
        scanf("%f", &numbers[i]);
        printf("\ndigite o peso da nota %d: ", i+1);
        scanf("%f", &weights[i]);
    }
}

void processamento03(float numbers[2], float weights[2], float* mean)
{
    float total_weight = 0;
    *mean=0;
    for (int i=0; i<2; i++)
    {
        *mean += numbers[i]*weights[i];
        total_weight+=weights[i];
    }
    *mean/=total_weight;
}

void saida03(float* mean){ printf("\nmedia: %f", *mean); }

void questao03(void)
{
    float numbers[2];
    float weights[2];
    float mean;
    
    entrada03(numbers, weights);
    processamento03(numbers, weights, &mean);
    saida03(&mean);
}