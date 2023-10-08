#include <stdio.h>

int main(){
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    int q = a / b, r = a % b;
    
    if(r < 0 && b > 0){ 
        q -= 1; r += b; 
        }
    else if(r < 0 && b < 0){ 
        q += 1; r = a - b * q; 
        }
    printf("%d %d\n", q, r);

    return 0;
}

