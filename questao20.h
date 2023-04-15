void questao20(void)
{
    float first, second, third;
    
    printf("digite o primeiro numero: ");
    scanf("%f", &first);
    printf("digite o segundo numero: ");
    scanf("%f", &second);
    printf("digite o terceiro numero: ");
    scanf("%f", &third);
    
    if (first == second && second == third) { printf("Números idênticos"); }
    else if (first == second)
    {
        if (second > third) { printf("o primeiro e o segundo sao iguais, e sao maiores que o terceiro"); }
        else { printf("o terceiro e o maior numero"); }
    }
    else if (first == third)
    {
        if (second > third) { printf("o segundo e o maior numero"); }
        else { printf("o primeiro e o terceiro sao iguais, e sao maiores que o segundo"); }
    }
    else if (second == third)
    {
        if (first > third) { printf("o primeiro e o maior numero"); }
        else { printf("o segundo e o terceiro sao iguais, e sao maiores que o primeiro"); }
    }
    else if (first>second)
    {
        if (first>third) { printf("o primeiro e o maior numero"); }
        else { printf("o terceiro e o maior numero"); }
    }
    else
    {
        if (second>third) { printf("o segundo e o maior numero"); }
        else { printf("o terceiro e o maior numero"); }
    }
}