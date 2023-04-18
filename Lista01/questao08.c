#include <stdio.h>
#include "questao08.h"

void entrada08(float* vel)
{
    printf("digite a velocidade do veiculo (Km/h): ");
    scanf("%f", vel);
}

void processamento08(float* vel)
{
    *vel/=3.6;
}

void saida08(float* vel)
{
    printf("velocidade em metros por segundo: %f", *vel);
}

void questao08(void)
{
    float vel;
    entrada08(&vel);
    processamento08(&vel);
    saida08(&vel);
}