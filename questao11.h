void questao11(void)
{
    int num = 0;
    while (num<=100 || num>=500)
    {
        printf("digite um numero (>100 e <500 para sair): ");
        scanf("%d", &num);
    }
    printf("alerta!");
}