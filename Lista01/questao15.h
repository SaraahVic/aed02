void questao15(void)
{
    float first, second;
    
    printf("digite o primeiro numero: ");
    scanf("%f", &first);
    printf("digite o segundo numero: ");
    scanf("%f", &second);
    
    if (first == second) { printf("os numeros sao iguais"); }
    else if (first>second) { printf("o primeiro numero e maior"); }
    else { printf("o segundo numero e maior"); }
}