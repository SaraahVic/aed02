void questao02(void)
{
    float numbers[4];
    float mean = 0;
    
    for (int i=0; i<4; i++)
    {
        printf("\ndigite o numero %d: ", i+1);
        scanf("%f", &numbers[i]);
        mean+=numbers[i];
    }
    
    mean/=4;
    printf("\nmedia: %f", mean);
}