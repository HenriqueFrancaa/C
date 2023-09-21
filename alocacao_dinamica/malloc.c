#include <stdio.h>
#include <stdlib.h>

int main(){

    int n; 
    scanf("%d", &n);

    int *v;

    v = (int *) malloc(n * sizeof(int)); // pedindo memoria ao sistema operacional

    for(int  i = 0; i < n; i++){
        scanf("%d", (v+i));
    }
    
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