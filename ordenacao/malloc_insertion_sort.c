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
    int *v = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        scanf("%d", (v+i));
    }
    int i = 1; int j = 0;
    while(i < n){
        j = i;
        while(j > 0){
            if(*(v+j) < *(v+(j-1))){
                swap(v+j, v+(j-1));
            }
            j--;
        }
        i++;
    }

    for(int i = 0; i < n-1; i++){
        printf("%d ", *(v+i));
    }
    printf("%d\n", *(v+(n-1)));

    free(v);
    return 0;
}