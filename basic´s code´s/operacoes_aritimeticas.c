#include <stdio.h>

int main(){

    printf("Digite dois numeros:\n");

    int a,b, soma, subt, multiplicacao, divisao;

    scanf("%d", &a);
    scanf("%d", &b);

    soma = a + b;
    subt = a - b;
    multiplicacao = a * b;

    printf("\nA soma : %d ", soma);
    printf("\nA subtracao : %d", subt);
    printf("\nA multiplicacao : %d", multiplicacao);
    

    if(b == 0){
        printf("\nDivisao: nao se pode fazer divisao por zero\n");
    }
    else{
        divisao = a / b;
        printf("\nA divisao : %d\n", divisao); 

    }

     
}
