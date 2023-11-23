#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


typedef struct{
    char num[1000];
}num;

char s[1000];
char a;

void soma(char n1[], char n2[], int t){
    int aux = 0, e; // aux == caso suba o resto do numero
    for(int i = t-1; i >= 0; i--){
        e = (n1[i] - '0')+ aux + (n2[i] - '0');
        if(e >= 10){
            aux = e/10;
            s[i] = e%10;
        }
        else if(e < 10){
            aux = 0;
            s[i] = e;
        }
    }
    a = aux + '0';
    //s[t] = '\0';

}

int main(){
    int t;
    scanf("%d ", &t);
    num n1,n2;

    memset(s,'0',sizeof(s));

    gets(n1.num);
    gets(n2.num);

    
    soma(n1.num,n2.num,t);

    if(a != '0')printf("%c", a);
        

    for(int i = 0; i < t; i++){
        printf("%d", s[i]);
    }printf("\n");


    return 0;
}