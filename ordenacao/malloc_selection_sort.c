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
        scanf("%d", v+i);
    }
    int i = 0; int j = 0; int min = 0;
    while(i < n-1){
        min = i;
        j = i+1;
        while (j < n){
            if(*(v+j) < *(v+min)){
                min = j;
            }
            j++;
        }
        swap((v+i), (v+min));
        i++;
    }

    for(int h = 0; h < n-1; h++){
        printf("%d ", *(v+h));
    }
    printf("%d\n", *(v+(n-1)));

    free(v);
    return 0;
}