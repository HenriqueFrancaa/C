#include <stdio.h>
#include <stdbool.h>

int main(){
    int n, h;
    while(scanf("%d", &n) && n != 0){
        int wave[n+1];
        for(int i = 0; i < n; i++){
            scanf("%d", &wave[i]);
        }
        wave[n] = wave[0];
        int cont = 0;

        if(wave[0] > wave[n-1] && wave[0] > wave[1]){
            cont++;
        }
        if(wave[0] < wave[n-1] && wave[0] < wave[1]){
            cont++;
        }

        for(int j = 1; j < n; j++){
            if(wave[j] > wave[j-1] && wave[j] > wave[j+1]){
                cont++;
            }
            if(wave[j] < wave[j-1] && wave[j] < wave[j+1]){
                cont++;
            }
        }

        printf("%d\n", cont);
    }
    return 0;
}
