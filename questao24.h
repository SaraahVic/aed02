void questao24(void)
{
    int um, dez, cem, compra, pago, troco;
    
    printf("digite o valor da compra: ");
    scanf("%d", &compra);
    printf("digite o valor pago: ");
    scanf("%d", &pago);
    
    if (pago<compra) { printf("Pagamento Negado"); }
    else
    {
        troco = pago-compra;
        cem = troco/100;
        troco%=100;
        
        dez = troco/10;
        troco%=10;
        
        um = troco;
        troco=pago-compra;
        
        printf("o troco de %d reais pode ser pago com %d notas de 100, %d notas de 10 e %d notas de 1 real", troco, cem, dez, um);
    }
}