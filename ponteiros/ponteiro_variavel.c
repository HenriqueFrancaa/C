#include <stdio.h>
#include <stdlib.h>

void reajuste20(float *preco, float *reajuste){
    *reajuste = *preco * 0.2;
    *preco *= 1.2; 
}


int main(){
    float val_preco, val_reaj;
    
    do{
        printf("\nInsira o preco atual: ");
        scanf("%f", &val_preco);
        reajuste20(&val_preco, &val_reaj); /*enviando os endereços das variáveis*/
        printf("\nO preco novo eh %.2f",val_preco);

        printf("O aumento foi de %.2f\n", val_reaj);

    }while(val_preco != 0.0);

    return 0;
}
