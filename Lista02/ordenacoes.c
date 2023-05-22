#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void bubble_sort(int array[10]){
    int cont, aux;    
    for (cont = 1; cont < 10; cont++){
        for (int j=0; j < 10 -1; j++){
            if(array[j] > array[j + 1]){
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }
    printf("array ordenado por bubble sort:");
    for(int i =0; i<10; i++){
        printf("%4d", array[i]);
    }
}

void insertion_sort(int array[10]){
	int i, j, aux; 
	for(i=0; i<10-1; i++){
        if(array[i]>array[i+1]){
            aux=array[i+1];
            array[i+1]=array[i]; 
            array[i]=aux;
            j=i-1;
            while(j>=0){
                if(aux<array[j]){
                    array[j+1]=array[j];
                    array[j] = aux;
                }
                else{
                    break;
                }
                j=j-1;
            }
        }
    }
    printf("\narray ordenado por insertion sort:");
    for(int i =0; i<10; i++){
        printf("%4d", array[i]);
    }
}

void selection_sort(int array[10]){
    int menor, aux;
    for(int i = 0; i<10-1; i++){
        menor=i;
        for(int j=i+1; j<10; j++){
            if(array[menor]>array[j]) menor=j;
        }
        if(i!=menor){
            aux=array[i];
            array[i] = array[menor];
            array[menor] = aux;
        }
    }
    printf("\narray ordenado por selection sort:");
    for(int i =0; i<10; i++){
        printf("%4d", array[i]);
    }
}

void merge(int *v, int inicio, int meio, int fim){
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;
    tamanho = fim-inicio+1;
    p1 = inicio;
    p2 = meio+1;
    temp = (int*) malloc(tamanho*sizeof(int));
    if(temp != NULL){
        for(i=0; i < tamanho; i++){
            if(!fim1 && !fim2){
                if(v[p1]<v[p2]) temp[i]=v[p1++];
                else temp[i]=v[p2++];

                if(p1>meio) fim1=1;
                if(p2>fim) fim2=1;
            }
            else{
                if(!fim1) temp[i]=v[p1++];
                else temp[i]=v[p2++];
            }
        }
        for(j=0, k=inicio; j<tamanho; j++, k++) v[k]=temp[j];
    }
    free(temp);
}
void merge_sort(int *array, int inicio, int fim){
    int meio;
    if(inicio<fim){
        meio = floor((inicio+fim)/2);
        merge_sort(array, inicio, meio);
        merge_sort(array, meio+1, fim);
        merge(array, inicio, meio, fim);
    }
}
int particiona(int *v, int inicio, int final){
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = final;
    pivo = v[inicio];
    while(esq<dir){
        while(v[esq]<=pivo) esq++;
        while(v[dir]>pivo) dir--;
        if(esq < dir){
            aux =v[esq];
            v[esq] = v[dir];
            v[dir] = aux;
        }
    }
    v[inicio] = v[dir];
    v[dir] = pivo;
    return dir;
}

void quick_sort(int *v, int inicio, int fim){
    int pivo;
    if(fim>inicio){
        pivo = particiona(v, inicio, fim);
        quick_sort(v, inicio, pivo-1);
        quick_sort(v, pivo+1, fim);
    }
}

int main(){
    int r;
    int resp;
    int array[10] = {19,3,-8,4,9,2,-3,56,5,10};
    printf("Array gerado: ");
    for(int i=0; i<10; i++){
        printf("'");
        printf("%d", array[i]);
        printf("'");
    }

        
    printf("\nSe deseja inserir os numeros no array:\nDigite 1(um) para inserir\nQualquer outro numero para continuar com array gerado\n");
    scanf("%d",&r);
    if(r==1){
        printf("\ninsira dez numeros aleatorios:\n");
        for (int i = 0; i < 10; i++){
            scanf("%d", &array[i]);
        }
    }

    printf("\nDigite o numero do algoritmo que deseja usar: \nbubble 1\ninsertion 2\nselection 3\nmerge 4\nquick 5\n");
    scanf("%d", &resp);
    switch (resp)
    {
    case 1:
        bubble_sort(array);
        break;
    case 2:
        insertion_sort(array);
        break;
    case 3:
        selection_sort(array);
        break;
    
    case 4:
        merge_sort(array, 0, 9);
        printf("\narray ordenado por merge sort:");
        for(int i =0; i<10; i++){
            printf("%4d", array[i]);
        }
        break;

    case 5:
        quick_sort(array, 0, 9);
        printf("\narray ordenado por quick sort:");
        for(int i =0; i<10; i++){
            printf("%4d", array[i]);
        }
        break;
    
    default:
        printf("opcao errada");
    }
    return 0;
}