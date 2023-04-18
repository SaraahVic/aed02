#include <stdio.h>
#include "questao01.h"

void entrada01(int numbers[3])
{
    for (int i=0; i<3; i++)
    {
        printf("\ndigite o numero %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
}

void processamento01(int numbers[3], int* sum)
{
    *sum=0;
    for (int i=0; i<3; i++) { *sum+=numbers[i]; }
}

void saida01(int* sum){ printf("\nsoma: %d", *sum); }

void questao01(void)
{
    int numbers[3];
    int sum;
    
    entrada01(numbers);
    processamento01(numbers, &sum);
    saida01(&sum);
}