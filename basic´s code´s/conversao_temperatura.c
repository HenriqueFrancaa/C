#include <stdio.h>

int main(){
    float tcelsius, tfire;

    printf("\nDigite sua temperatura em celsius para ver em fahrenheit: ");
    scanf("%f", &tcelsius);

    tfire = (tcelsius * 9/5) + 32;

    printf("A temperatura em fahrenheit: %.2f K", tfire);

    return 0;

}