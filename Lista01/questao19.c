#include <stdio.h>
#include "questao19.h"

void entrada19(float n[3])
{
    printf("digite os lados do triangulo\n");
    for (int i=0; i<3; i++)
    {
        printf("lado %d: ", i+1);
        scanf("%f", &n[i]);
    }
}

void processamento19(float n[3], char** result)
{
    if (n[0] == n[1])
    {
        if (n[1] == n[2]) { *result = "o triangulo e equilatero"; }
        else { *result = "o triangulo e isosceles"; }
    }
    else if (n[1] == n[2] || n[0] == n[2]) { *result = "o triangulo e isosceles"; }
    else { *result = "o triangulo e escaleno"; }
}

void saida19(char** result) { printf(*result); }

void questao19(void)
{
    float n[3];
    char* res;
    
    entrada19(n);
    processamento19(n, &res);
    saida19(&res);
}