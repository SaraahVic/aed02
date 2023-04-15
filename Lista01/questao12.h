void questao12(void)
{
    float nota[2];
    float mean = 0;
    for (int i=0;i<2;i++)
    {
        printf("digite a nota %d: ", i+1);
        scanf("%f", &nota[i]);
        mean+=nota[i];
    }
    mean/=2;
    if (mean<7) { printf("reprovado!"); }
    else { printf("aprovado!"); }
}