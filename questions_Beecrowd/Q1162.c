#include <stdio.h>

int cont = 0;
void swap(int *x, int *y){
    int t = *x;
    *x = *y;
    *y = t;
    cont++;
}


int main(){
    int t,i,j,n,h,q;

    scanf("%d", &t);
    for(i = 0; i < t; i++){
        scanf("%d", &n);
        int trem[n];
        for(j = 0; j < n; j++){
            scanf("%d", &trem[j]);
        }
        for(h = 0; h < n-1; h++){
            for(q = 0; q < n-1; q++){
                if(trem[q] > trem[q+1]){
                    swap(&trem[q], &trem[q+1]);
                }
   
             }
        }
        printf("Optimal train swapping takes %d swaps.\n", cont);
        cont = 0;
    }
   

    return 0;
}

