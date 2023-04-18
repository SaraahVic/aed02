#include <stdio.h>
#include "questao10.h"

void entrada10(char input[100])
{
    printf("digite a senha: ");
    scanf("%s", input);
}

void processamento10(char password[11], char input[100], char* matches)
{
    *matches=1;
    for (int i=0;input[i]!='\0';i++)
    {
        if (input[i] >= 'a' && input[i] <= 'z') { input[i] = input[i]-32; }
        if (i>9) { *matches = 0; break; }
        else if(input[i] != password[i]) { *matches = 0; break; }
    }
}

void saida10(char* matches)
{
    if (!*matches) { printf("a senha e valida"); }
    else { printf("a senha nao e invalida"); }
}

void questao10(void)
{
    char password[11] = "LINGUAGEMC";
    char input[100];
    char matches;

    entrada10(input);
    processamento10(password, input, &matches);
    saida10(&matches);
}