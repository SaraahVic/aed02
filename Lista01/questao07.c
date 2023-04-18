#include <stdio.h>
#include "questao07.h"

void entrada07(float* radius)
{
    printf("digite o raio do circulo: ");
    scanf("%f", radius);
}

void processamento07(float *radius, float* pi, float* peri, float* area, float* diam)
{
    *peri = 2*(*pi)*(*radius);
    *area = (*pi)*(*radius)*(*radius);
    *diam = 2*(*radius);
}

void saida07(float* peri, float* area, float* diam)
{
    printf("perimetro: %f\n", *peri);
    printf("area: %f\n", *area);
    printf("diametro: %f\n", *diam);
}

void questao07(void)
{
    float radius, peri, area, diam, pi = 3.14;
    
    entrada07(&radius);
    processamento07(&radius, &pi, &peri, &area, &diam);
    saida07(&peri, &area, &diam);
}