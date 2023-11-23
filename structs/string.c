#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char num[1024];
    int sz;
}palavra;

void juntando(char *n, char *n2){
    strcat(n,n2);
}


int main(){
    palavra nome,nome2,n1,n2;
    scanf("%s", &nome.num);
    scanf("%s", &nome2.num);

    strcat(nome.num,nome2.num);
    printf("%s\n", nome.num);
    palavra tamanho;
    tamanho.sz = strlen(nome.num);

    printf("%d\n", tamanho.sz);

    scanf("%s", &n1.num);
    scanf("%s", &n2.num);

    juntando(n1.num,n2.num);

    printf("%s\n", n1.num);

    return 0;
}
