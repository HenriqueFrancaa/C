#include <stdio.h>

int main(){
    
    float n1,n2,n3,n4;
    double media;

    printf("\nDigite as quatro notas: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1 + n2 + n3 + n4) / 4.0;

    printf("\nSua Media: %.1f", media);

    return 0;

}