void questao21(void)
{
    int nums[3];
    
    printf("digite tres numeros\n");
    for (int i=0; i<3; i++)
    {
        printf("numero %d: ", i+1);
        scanf("%d", &nums[i]);
    }
    
    int smallest;
    for (int i=0; i<3; i++)
    {
        smallest = i;
        for (int j=i+1; j<3; j++)
        {
            if (nums[j] < nums[smallest]) { smallest = j; }
        }
        if (smallest != i)
        {
            nums[i]+=nums[smallest];
            nums[smallest] = nums[i]-nums[smallest];
            nums[i]-=nums[smallest];
        }
    }
    
    printf("numeros em ordem crescente: %d|%d|%d", nums[0], nums[1], nums[2]);
}