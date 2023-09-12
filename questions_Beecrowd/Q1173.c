#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int N[10];
    int i = 0;
    N[0] = n;
    for(i = 1; i < 10; i++){
        n = n * 2;
        N[i] = n;
    }
    for(i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}