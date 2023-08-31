#include <stdio.h>

int main(){
    float matriz[12][12];
    char S;
    int i, j;
    int c = 11;
    float cont = 0;
    float sum = 0;
    scanf("%c", &S);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f", &matriz[i][j]);
            if(j < 11-i ){
                sum += matriz[i][j];
                cont++;
            }
        }
    }
    float avg = sum/cont;
    if(S == 'S'){
        printf("%.1f\n", sum);
    }
    else{
        printf("%.1f\n", avg);
    }
    return 0;
}

