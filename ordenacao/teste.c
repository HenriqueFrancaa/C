#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char *s = (char *)malloc(1000 * sizeof(char));
    gets(s);
    int size = strlen(s);
    
    for(int i = 0; i < size; i++){
        printf("%c\n", *(s+i));
    }

    free(s);
    return 0;
}