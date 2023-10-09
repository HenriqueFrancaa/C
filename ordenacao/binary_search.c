#include <stdio.h>



int main(){
    int n,p;
    scanf("%d", &n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    printf("Qual numero deseja procurar?\n");
    scanf("%d", &p);
    int i = 0; int j = 0; int min = 0;
    //ordenando o vetor
    while(i < n-1){
        min = i;
        j = i+1;
        while(j < n){
            if(vetor[j] < vetor[min]){
                min = j;
            }
            j++;
        }
        int t = vetor[min];
        vetor[min] = vetor[i];
        vetor[i] = t;
        i++;
    }

    int low = 0; int mid = 0; int high = n-1;
    int search = 0;

    while(low <= high){
        mid = (high + low) / 2;
        if(p > vetor[mid]){
            low = mid +1;
        }
        else if(p < vetor[mid]){
            high = mid - 1;
        }
        else if(p == vetor[mid]){
            search = 1;
            break;
        }
    }

    for(int i = 0; i < n-1; i++){
        printf("%d ", vetor[i]);
    }printf("%d\n", vetor[n-1]);

    if(search == 1){
        printf("O numero %d foi encontrado no indice: %d\n", p,mid);
    }
    else{
        printf("O numero nao esta presente no vetor\n");
    }
    return 0;
}