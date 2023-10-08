#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int t;
    scanf("%d\n",&t);
    for(int i = 0; i < t; i++){
        char s1[53];
        int d = 0;
        int l = 0;
        
        fgets(s1, 53, stdin);
        
        int x = strlen(s1)-1;

        for(int h = 0; h < x; h++){
            if( s1[h] != ' ' && d == 0){
                d = 1;
                printf("%c", s1[h]);
                l++;
            }
            if(s1[h] == ' '){
                d = 0;
            }
        }printf("\n");
        
    }
    return 0;
}