#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d", &n);
    int b = 0;
    int p = 0;
    bool t = true; //true == branco false == preto

    if(n%2 == 0){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j == n-1){
                    if(t == true){
                        b++;
                    }
                    else{
                        p++;
                    }
                    t = t;
                }
                
                else if( t == true){
                    b++;
                    t = false;
                }
                else if(t == false){
                    p++;
                    t = true;
                }
            }
        }
    }

    else{
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(t == true){
                    b++;
                    t = false;
                }
                else{
                    p++;
                    t = true;
                }
            }
        }
    }

    printf("%d casas brancas\n", b);
    printf("%d casas pretas\n", p);

    return 0;
}