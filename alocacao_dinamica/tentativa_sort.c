#include <stdio.h>
#include <stdlib.h>


void swap(int *x, int *y){
    int t = *x;
    *x = *y;
    *y = t;
}


void sort(int *v, int n){
    int *min;
    for(int i = 0; i < n-1; i++){
        *min = *(v+i);
        for(int j = i+1; j < n; j++){
            if(*(v+j) < *min){
                min = v+j;
            }
        }
        swap(min,(v+i));
    }
}

int main(){
    int t,n;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d",&n);
        int *v;
        v = (int *)(malloc(n * sizeof(int)));

        for(int j = 0; j < n; j++){
            scanf("%d", (v+j));
        }

        sort(v,n);

        for(int h = 0; h < n; h++){
            if(h == n-1){
                printf("%d\n", *(v+h));
            }
            else{
                printf("%d ", *(v+h));
            }
        }

        free(v);
    }
    return 0;
}
