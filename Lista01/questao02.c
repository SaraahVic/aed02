#include <stdio.h>
#include "questao02.h"

void entrada02(float numbers[4])
{
    for (int i=0; i<4; i++)
    {
        printf("\ndigite o numero %d: ", i+1);
        scanf("%f", &numbers[i]);
    }
}

void processamento02(float numbers[4], float* mean)
{
    *mean=0;
    for (int i=0; i<4; i++) { *mean+=numbers[i]; }    
    *mean/=4;
}

void saida02(float* mean){ printf("\nmedia: %f", *mean); }

void questao02(void)
{
    float numbers[4];
    float mean;
    
    entrada02(numbers);
    processamento02(numbers, &mean);
    saida02(&mean);
}