void questao22(void)
{
    char name[100];
    int voters, most_voted;
    
    printf("digite o nome do municipio: ");
    scanf("%s", name);
    printf("digite o numero de eleitores de %s: ", name);
    scanf("%d", &voters);
    printf("digite o numero de votos do candidato mais votado: ");
    scanf("%d", &most_voted);
    
    if (most_voted>voters/2) {printf("nao havera segundo turno em %s", name); }
    else { printf("havera segundo turno em %s", name); }
}