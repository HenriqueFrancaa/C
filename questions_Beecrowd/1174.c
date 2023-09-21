#include <stdio.h>

int main(){
    float A[100];
    int i,j;

    for(i = 0; i < 100; i++){
        scanf("%f",&A[i]);
    }
    for(j = 0; j < 100; j++){
        if(A[j] <= 10){
            printf("A[%d] = %.1f\n",j,A[j]);
        }
    }
    return 0;
}