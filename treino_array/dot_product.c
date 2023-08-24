#include <stdio.h>


int main(){
    int n,i;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);
    int vetorA[n];
    int vetorB[n];
    int doc_product = 0;    
    printf("Digite os elementos do vetor A: ");
    for(i = 0; i < n; i++){
        scanf("%d",&vetorA[i]);
    }
    printf("Digite os elementos do vetor B: ");
    for(i = 0; i < n; i++){
        scanf("%d", &vetorB[i]);
    }

    //doc product
    for(i = 0; i < n; i++){
        doc_product += vetorA[i] * vetorB[i];
    }

    printf("O produto escalar dos dois vetores eh: %d\n", doc_product);
    return 0;
}
