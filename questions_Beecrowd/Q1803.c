#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char matriz[4][90];
    int f=0,l=0,m=0;
    for(int i = 0; i < 4; i++){
        fgets(matriz[i],90,stdin);
        matriz[i][strlen(matriz[i])-1] = '\0';
    }
    int size = strlen(matriz[0])-1;
    int d = 1000;

    for(int i = 0; i < 4; i++){ //formando o numero de cada linha na coluna zero
        f += (matriz[i][0] - '0') * d;
        d /= 10;
    }
    d = 1000;
    for(int i = 0; i < 4; i++){
        l += (matriz[i][size] - '0') * d;
        d /= 10;
    }
    for(int i = 1; i < size; i++){
        d = 1000;
        m = 0;
        for(int j = 0; j < 4; j++){
            m += (matriz[j][i] - '0') * d;
            d /= 10;
        }
        char c = (f*m+l)%257;
        printf("%c", c);
    }
    printf("\n");
    return 0;
}