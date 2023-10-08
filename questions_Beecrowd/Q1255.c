#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int t;
    scanf("%d\n", &t);
    
    while(t--){
        int alfabeto[26];
        char palavra[500]; int max = 0; char l;
        memset(alfabeto,0, 26*sizeof(alfabeto[0]));
        fgets(palavra, 500, stdin);
        int size = strlen(palavra);

        for(int i = 0; i < size; i++){
            if(palavra[i] >= 97 && palavra[i] < 123){
                int x = palavra[i];
                alfabeto[x - 97] += 1;
            }
            if(palavra[i] >= 65 && palavra[i] < 91){
                int x = palavra[i] + 32;
                alfabeto[x - 97] += 1;
            }
        }
        char res[26];
        int d = 0;
        for(int i = 0; i < 26; i++){
            if(alfabeto[i] > max){
                max = alfabeto[i];
                l = i + 97;
                d = 0;
                memset(res,'0', 26*sizeof(res[0]));
                res[d] = l;
                d++;    
            }
            else if(alfabeto[i] == max && alfabeto[i] != 0){
                l = i + 97;
                res[d] = l;
                d++;
            }
        }
        for(int h = 0; h < 26; h++){
            if(res[h] != '0'){
                printf("%c", res[h]);
            }
        }
        printf("\n");
    }
    return 0;
}