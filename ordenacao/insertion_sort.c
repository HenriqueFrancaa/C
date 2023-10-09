#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int vetor[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    int i = 1; int j = 0;
    while(i < n){
        j = i;
        while(j > 0){
            if(vetor[j] < vetor[j-1]){
                int t = vetor[j-1];
                vetor[j-1] = vetor[j];
                vetor[j] = t;
            }
            j--;
        }
        i++;
    }
    for(int h = 0; h < n-1; h++){
        printf("%d ", vetor[h]);
    }
    printf("%d\n", vetor[n-1]);
    return 0;
}