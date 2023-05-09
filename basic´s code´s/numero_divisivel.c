#include <stdio.h>

int main(){


	int numero1, numero2;

	scanf("%i %i", &numero1, &numero2);

	if( numero2 == 0){
		printf("Divisao por 0 nao permitida\n");
	}
	else{
		if(numero1 % numero2 == 0){
			printf("%i e divisivel por %i\n", numero1, numero2);
		}
		else{
			printf("%i nao e divisivel por %i\n", numero1, numero2);
		}

	}

	return 0;

}



