#include <stdio.h>
#include "questao21.h"

void entrada21(int nums[3])
{
    printf("digite tres numeros\n");
    for (int i=0; i<3; i++)
    {
        printf("numero %d: ", i+1);
        scanf("%d", &nums[i]);
    }
}

void processamento21(int nums[3], int* smallest)
{
    for (int i=0; i<3; i++)
    {
        *smallest = i;
        for (int j=i+1; j<3; j++)
        {
            if (nums[j] < nums[*smallest]) { *smallest = j; }
        }
        if (*smallest != i)
        {
            nums[i]+=nums[*smallest];
            nums[*smallest] = nums[i]-nums[*smallest];
            nums[i]-=nums[*smallest];
        }
    }
}

void saida21(int nums[3]) { printf("numeros em ordem crescente: %d|%d|%d", nums[0], nums[1], nums[2]); }

void questao21(void)
{
    int nums[3];
    int smallest;
    
    entrada21(nums);
    processamento21(nums, &smallest);
    saida21(nums);
}