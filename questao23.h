void questao23(void)
{
    char ty;
    float dist;
    
    printf("digite o tamanho do percurso: ");
    scanf("%f", &dist);
    printf("digite o tipo do carro (A, B ou C): ");
    scanf(" %c", &ty);
    
    
    switch (ty)
    {
        case 'A':
            printf("consumo estimado: %.2fL", dist/8);
        break;
        
        case 'B':
            printf("consumo estimado: %.2fL", dist/9);
        break;
        
        case 'C':
            printf("consumo estimado: %.2fL", dist/12);
        break;
    }
}