void questao04(void)
{
    float salary, raise_percentage;
    printf("digite o salario atual: ");
    scanf("%f", &salary);
    printf("digite a porcentagem de aumento: ");
    scanf("%f", &raise_percentage);
    printf("salario apos aumento: %f", (salary*raise_percentage)/100);
}