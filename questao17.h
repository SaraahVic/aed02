void questao17(void)
{
    float buy_price, sell_price;
    
    printf("digite o valor da compra: ");
    scanf("%f", &buy_price);
    
    if (buy_price < 200) { sell_price = buy_price*1.5; }
    else { sell_price = buy_price*1.3; }
    
    printf("valor da venda: %f", sell_price);
}