void questao09(void)
{
    int num = 0;
    while (num <= 100)
    {
        printf("digite um numero (>100 para parar): ");
        scanf("%d", &num);
    }
    printf("alerta!");
}