void questao01(void)
{
    int numbers[3];
    int sum = 0;
    
    for (int i=0; i<3; i++)
    {
        printf("\ndigite o numero %d: ", i+1);
        scanf("%d", &numbers[i]);
        sum+=numbers[i];
    }
    
    printf("\nsoma: %d", sum);
}