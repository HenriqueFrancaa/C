#include <stdio.h>
 
int main() {
 
    int n,i=1;
    scanf("%d", &n);
    
    while(i <= 10){
        int calc = i * n;
        printf("%d x %d = %d\n",i,n,calc);
        i++;
    }
 
    return 0;
    //Multiplication table
}
