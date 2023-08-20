#include <stdio.h>


int main(){
    int i = 2;
    int j = 3;
    int h = 7;

    printf("O endereco do numero %d eh : %p\n", i, &i);
    printf("O endereco do numero %d eh : %p\n", j, &j);
    printf("O endereco do numero %d eh : %p\n", h, &h);
    
    return 0;
}
