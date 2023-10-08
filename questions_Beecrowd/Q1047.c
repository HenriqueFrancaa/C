#include <stdio.h>

int main(){
    int hi,mi,hf,mf;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    int im = (hi * 60) + mi;
    int fm = (hf * 60) + mf;

    int tempo = fm - im;

    if(tempo > 0){
        int horas = (tempo/60);
        int minutos = tempo%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",horas, minutos);
    }
    else{
        if(tempo <= 0){
            tempo = 24 * 60 + tempo;
            int horas = (tempo/60);
            int minutos = tempo%60;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
        }
    }
    return 0;
}
