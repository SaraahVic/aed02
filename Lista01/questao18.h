void questao18(void)
{
    float n1, n2, media;

    printf("digite a primeira unidade: ");
    scanf("%f", &n1);
    printf("digite a segunda unidade: ");
    scanf("%f", &n2);

    media = (n1+n2)/2;

    if (media >= 7) { printf("resultado: aprovado"); }
    else if (media < 3) { printf("resultado: reprovado"); }
    else { printf("resultado: prova final"); }
}