#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int r = a%b;

    int q = (a - r)/b;

    printf("%d %d\n",q, r);

    return 0;
}