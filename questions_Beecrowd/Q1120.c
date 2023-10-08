#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    while(1){
        char n; char num[500];
        scanf("%c\n", &n);
        fgets(num,500, stdin);
        if(n == '0' && strlen(num) == 2 && num[0] == '0')break;

        int size = strlen(num)-1; // -1 pq ele pega o \0;
        int i = 0;
        for(i = 0; i < size; i++){
            if(num[i] != '0' && num[i] != n){
                break;
            }
        }
        if(i == size)printf("0\n");
        else{
            for(int j = i; j < size; j++){
                if(num[j] != n){
                    printf("%c", num[j]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}