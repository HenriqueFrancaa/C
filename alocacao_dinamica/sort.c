#include <stdio.h>
#include <stdlib.h>

void swap(int *i, int *j){
    int t = *i;
    *i = *j;
    *j = t;
    // fazendo a troca
}


int *find_min(int *v, int s, int e){
    int *min = v+s;
    for(int i = s+1; i < e; i++){
        if(*(v+i) < *min){      // encontrando o menor valor.
            min = v+i;
        }
    }

    return min; // retornando o endereço que está o menor valor.
}


void sort(int *v, int n){
    for(int i = 0; i < n; i++){
        int *min = find_min(v,i,n);
        swap(min,v+i);
    }
}


int main(){
    int n;
    scanf("%d", &n);
    int *v = (int *)malloc(n * sizeof(int)); // solicitando o espaço da memoria dinamica

    for(int i = 0; i < n; i++){
        scanf("%d", (v+i));
    }

    sort(v,n);

    for(int j = 0; j < n; j++){
        if(j == n-1){
            printf("%d\n", *(v+j));
        }
        else{
            printf("%d ", *(v+j));
        }
    }

    free(v);
    return 0;
}