#include <stdio.h>

int main(){
    int x[10];
    int n,i,j;
    for(i = 0; i < 10; i++){
        scanf("%d", &n);
        if(n < 0 || n == 0){
            x[i] = 1;
        }
        else{
            x[i] = n;
        }
    }
    for(j = 0; j < 10; j++){
        printf("X[%d] = %d\n", j, x[j]);
    }
    return 0;
}
