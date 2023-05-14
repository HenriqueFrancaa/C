#include <stdio.h>
#include <stdlib.h>
int main(){

	int notas[5];
	int i;
	float media = 0.0;

	for(i=0 ; i < 5 ; i++){
		printf("\nDigite as notas: ");
		scanf("%d", &notas[i]);
		media += notas[i];
	}

	media /= 5.0;
	printf("\nMedia das notas: %.2f", media);

	return 0;

}

