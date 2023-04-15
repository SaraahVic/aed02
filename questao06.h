void questao06(void)
{
    float old, new;
    printf("digite o valor antigo: ");
    scanf("%f", &old);
    printf("digite o valor novo: ");
    scanf("%f", &new);
    printf("porcentagem de aumento: %.2f%%", (new-old)/old*100);
}