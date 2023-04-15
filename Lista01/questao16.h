void questao16(void)
{
    float sal, liq;
    printf("digite o salario bruto: ");
    scanf("%f", &sal);
    
    if (sal < 2000) { liq=sal*0.9; }
    else { liq = sal*0.8; }
    
    printf("salario liquido: %f", liq);
}