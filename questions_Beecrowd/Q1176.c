    #include <stdio.h>
    #include <string.h>

    long long F[61];

    long long fib(long long n){
        if(F[n] == -1){
            if(n == 0){
                F[n] = 0;
                return 0;
            }
            if(n == 1){
                F[n] = 1;
                return 1;
            }
            return fib(n - 1) + fib(n - 2);
        } 
        return F[n];

    }
    int main(){
        long long t;
        scanf("%lld", &t);
        long long z = 0;
        long long N[t];
        int i = 0; int j = 0; int h = 0;

        memset(F, -1, 61*sizeof(F[0]));

        for(i = 0; i < t; i++){
            scanf("%lld", &N[i]);
        }
        for(j = 0; j < t; j++){
            z = fib(N[j]);
            F[N[j]] = z;
        }

        for(h = 0; h < t; h++){
            printf("Fib(%lld) = %lld\n", N[h], F[N[h]]);
        }
        
        return 0;
    }