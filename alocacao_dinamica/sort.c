#include <stdio.h>
#include <stdlib.h>

void swap(int *i, int *j){
    int t = *i;
    *i = *j;
    *j = t;
}


int *find_min(int *v, int s, int e){
    int *min = v+s;
    for(int i = s+1; i < e; i++){
        if(*(v+i) < *min){
            min = v+i;
        }
    }

    return min;
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
    int *v = (int *)malloc(n * sizeof(int));

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