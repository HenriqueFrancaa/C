#include <stdio.h>

int main(){
    int test,tam;
    int i = 0; int j = 0; int h = 0;
    int q = 0;
    int dpro= 0;
    scanf("%d",&test);
    for(i = 1; i <= test; i++){
        scanf("%d",&tam);
        int A[tam];
        int B[tam];
        for(int j = 0; j < tam; j++){
            scanf("%d",&A[j]);
        }
        for(int h = 0; h < tam; h++){
            scanf("%d",&B[h]);
        }
        for(q = 0; q < tam; q++){
            dpro += A[q] * B[q];
        }
        if(dpro != 0){
            printf("Case %d : Nao Ortogonais\n", i);
        }
        else{
            printf("Case %d : Ortogonais\n", i);
        }
    }
    return 0;
}
