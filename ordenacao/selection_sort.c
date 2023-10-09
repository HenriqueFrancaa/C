#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y){
    int t = *x;
    *x = *y;
    *y = t;
}

int main(){
    int n;
    scanf("%d", &n);
    int vetor[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    int i = 0; int min = 0; int j = 0;
    while(i < n-1){
        min = i;
        j = i + 1;
        while(j < n){ // encontrando o menor valor do array
            if(vetor[j] < vetor[min]){
                min = j;
            }
            j++;
        }
        //trocando os valores
        swap(&vetor[i], &vetor[min]);

        i++;
    }
    for(int h = 0; h < n-1; h++){
        printf("%d ", vetor[h]);
    }
    printf("%d\n", vetor[n-1]);

    return 0;
}