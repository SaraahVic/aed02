#include <stdio.h>
#include "questao24.h"

void entrada24(int* compra, int* pago)
{
    printf("digite o valor da compra: ");
    scanf("%d", compra);
    printf("digite o valor pago: ");
    scanf("%d", pago);
}

void processamento24(int* compra, int* pago, int* um, int* dez, int* cem, int* troco)
{
    *troco = *pago-*compra;
    *cem = *troco/100;
    *troco%=100;
    
    *dez = *troco/10;
    *troco%=10;
    
    *um = *troco;
    *troco=pago-compra;
}

void saida24(int* um, int* dez, int* cem)
{
    if (!*troco>=0) { printf("o troco pode ser pago com %d notas de 100, %d notas de 10 e %d notas de 1 real", *cem, *dez, *um); }
    else { printf("Pagamento Negado"); }
}

void questao24(void)
{
    int um, dez, cem, compra, pago, troco;
    
    entrada24(&compra, &pago);
    processamento24(&compra, &pago, &um, &dez, &cem, &troco);
    saida24(&um, &dez, &cem);
}