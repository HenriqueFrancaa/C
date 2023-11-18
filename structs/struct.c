#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct{
    char nome[100];
    int idade;
    char sexo;
}dados;


int main(){

    dados pessoa1;
    gets(pessoa1.nome);
    scanf("%d", &pessoa1.idade);
    scanf(" %c", &pessoa1.sexo);
    //espaço porque ele vai ignorar o espaço que vai vir depois do pessoa1.idade

    printf("NOME: %s \nIDADE: %d \nSEXO: %c\n", pessoa1.nome, pessoa1.idade, pessoa1.sexo);
    return 0;
}