void questao07(void)
{
    float radius, pi = 3.14;
    printf("digite o raio do circulo: ");
    scanf("%f", &radius);
    printf("perimetro: %f\n", 2*pi*radius);
    printf("area: %f\n", pi*radius*radius);
    printf("diametro: %f\n", 2*radius);
}