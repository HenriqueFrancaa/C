#include <stdio.h>

int main(){
    int i,n,j,h,k,q;
    int cp = 0;
    int ci = 0;
    int par[5];
    int impar[5];
    while(i < 15){
        scanf("%d", &n);
        if(n%2 == 0){
            par[cp] = n;
            cp++;
        }
        else{
            impar[ci] = n;
            ci++;
        }
        if(cp == 5){
            for(j = 0; j < cp; j++){
                printf("Par[%d] = %d\n",j, par[j]);
            }
            cp  = 0;
        }
        if(ci == 5){
            for(h = 0; h < ci; h++){
                printf("Impar[%d] = %d\n",h, impar[h]);
            }
            ci = 0;
        }
        i++;
    }

    for(k = 0; k < ci; k++){
        printf("Impar[%d] = %d\n", k, impar[k]);
    }
    for(q = 0; q < cp; q++){
        printf("Par[%d] = %d\n", q, par[q]);
    }
    return 0;
}
