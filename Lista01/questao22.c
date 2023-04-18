#include <stdio.h>
#include "questao22.h"

void entrada22(char name[100], int* voters, int* most_voted)
{
    printf("digite o nome do municipio: ");
    scanf("%s", name);
    printf("digite o numero de eleitores de %s: ", name);
    scanf("%d", voters);
    printf("digite o numero de votos do candidato mais votado: ");
    scanf("%d", most_voted);
}

void processamento22(int* voters, int* most_voted, char** res)
{
    if (*most_voted>*voters/2) { *res = "nao havera segundo turno em "; }
    else { *res = "havera segundo turno em "; }
}

void saida22(char* name, char** res) { printf("%s%s", *res, name); }

void questao22(void)
{
    char name[100];
    int voters, most_voted;
    char* res;

    entrada22(name, &voters, &most_voted);
    processamento22(&voters, &most_voted, &res);
    saida22(name, &res);
}