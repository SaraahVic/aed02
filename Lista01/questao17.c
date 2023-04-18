#include <stdio.h>
#include "questao17.h"

void entrada17(float* buy_price)
{
    printf("digite o valor da compra: ");
    scanf("%f", buy_price);
}

void processamento17(float* buy_price, float* sell_price)
{
    if (*buy_price < 200) { *sell_price = *buy_price*1.5; }
    else { *sell_price = *buy_price*1.3; }
}

void saida17(float* sell_price) { printf("valor da venda: %f", *sell_price); }

void questao17(void)
{
    float buy_price, sell_price;
    
    entrada17(&buy_price);
    processamento17(&buy_price, &sell_price);
    saida17(&sell_price);
}