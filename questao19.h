void questao19(void)
{
    float n[3];
    
    printf("digite os lados do triangulo\n");
    for (int i=0; i<3; i++)
    {
        printf("lado %d: ", i+1);
        scanf("%f", &n[i]);
    }
    
    if (n[0] == n[1])
    {
        if (n[1] == n[2]) { printf("o triangulo e equilatero"); }
        else { printf("o triangulo e isosceles"); }
    }
    else if (n[1] == n[2] || n[0] == n[2]) { printf("o triangulo e isosceles"); }
    else { printf("o triangulo e escaleno"); }
}