void questao03(void)
{
    float numbers[2];
    float weight[2];
    float mean = 0;
    float total_weight=0;
    
    for (int i=0; i<2; i++)
    {
        printf("\ndigite a nota %d: ", i+1);
        scanf("%f", &numbers[i]);
        printf("\ndigite o peso da nota %d: ", i+1);
        scanf("%f", &weight[i]);
        
        mean += numbers[i]*weight[i];
        total_weight+=weight[i];
    }
    
    mean/=total_weight;
    printf("\nmedia: %f", mean);
}