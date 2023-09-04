#include <stdio.h>

int main(){
    int t,tam;
    int cont = 0;
    int i = 0; int j = 0; int h = 0;
    scanf("%d",&t);
    for(i = 1; i <= t; i++){
        scanf("%d",&tam);
        int array[tam];
        for(j = 0; j < tam; j++){
            scanf("%d",&array[j]);
        }
        int a = tam-1;
        for(h = 0; h < tam/2; h++){
            if(array[h] == array[a]){
                cont++;
                a--;
            }
            else{
                break;
            }
        }
        if(cont == tam/2){
            printf("Case %d : YES\n", i);
        }
        else{
            printf("Case %d : NO\n", i);
        }
        cont = 0;
    }
    return 0;
}
