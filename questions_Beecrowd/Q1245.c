#include <stdio.h>

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        int T[n];
        char L[n];
        int cont = 0;
        for(int i = 0; i < n; i++){
            scanf("%d %c", &T[i], &L[i]);
        }

        for(int h = 0; h < n; h++){
            for(int j = 0; j < n; j++){
                if(j != h && T[h] == T[j]){
                    if(L[h] != L[j]){
                        cont++;
                        T[h] = -1;
                        T[j] = -1;
                        L[j] = '0';
                        L[h] = '0';
                        break;
                    }
                }
            }
        }
        printf("%d\n", cont);
    }
    return 0;
}