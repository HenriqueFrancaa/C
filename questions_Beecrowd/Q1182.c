#include <stdio.h>

int main(){
    int co;
    double e;
    char op;
    scanf("%d %c", &co, &op);
    int i = 0;
    int j = 0;
    double sum = 0;
    
    while(i < 12){
        j = 0;
        while(j < 12){
            scanf("%lf", &e);
            if(j == co){
                sum += e;
            }
            j++;
        }
        i++;
    }
    double avg = sum / 12;

    if( op == 'S'){
        printf("%1.lf\n", sum);
    }
    else{
        printf("%1.lf\n", avg);
    }
    return 0;
}

