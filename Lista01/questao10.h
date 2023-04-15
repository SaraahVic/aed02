void questao10(void)
{
    char password[11] = "LINGUAGEMC";
    char input[100];
    
    printf("digite a senha: ");
    scanf("%s", input);
    
    char matches = 1;
    for (int i=0;input[i]!='\0';i++)
    {
        if (input[i] >= 'a' && input[i] <= 'z') { input[i] = input[i]-32; }
        if (i>9) { matches = 0; break; }
        else if(input[i] != password[i]) { matches = 0; break; }
    }
    
    if (matches) { printf("a senha e valida"); }
    else { printf("a senha nao e invalida"); }
}