void questao05(void)
{
    float salary, liq;
    int deps;
    printf("digite o salario: ");
    scanf("%f", &salary);
    printf("digite o numero de dependentes: ");
    scanf("%d", &deps);
    liq = (salary + deps*32)*0.725;
    printf("salario liquido: %f\n", liq);
}