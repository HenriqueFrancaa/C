#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int t, l=0;
    scanf("%d\n", &t);

    while(t--){   
        
        char *s = (char *) malloc(1000 * sizeof(char));
        fgets(s, 1000, stdin);
        //printf("%s", s);
        int x = strlen(s)-1;
        int p = x-1;
        //printf("%d eh o tamanho da string\n", x);
        for(int i = 0; i < x/2; i++){
            char t = s[i];
            s[i] = s[p];
            s[p] = t;
            p--;
        }
        for(int j = 0; j < x; j++){
            if(s[j] >= 65 && s[j] <= 126){
                int z = s[j] + 3;
                s[j] = z;
            }
        }

        for(int h = x/2; h < x; h++){
            int z = s[h] - 1;
            s[h] = z;
        }

        printf("%s", s);

        free(s);
    }
    
    return 0;
}