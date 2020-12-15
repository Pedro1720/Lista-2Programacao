
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int k,voltas,melhorTempo,melhorVolta;
	float media=0;

	printf("Quantas voltas foram dadas?\n");
	scanf("%d",&voltas);
	int tempo[voltas];
	
	
	for(k=0;k<voltas;k++){
		printf("Qual o tempo da %dº volta?:\n",k);
		scanf("%d",&tempo[k]);
		
		if(k==0 || (tempo[k]<melhorTempo) ){
			melhorTempo=tempo[k];
			melhorVolta=k;

		}
		media+=tempo[k];
	}
	
	printf("\nO melhor tempo foi %d na volta %d.",melhorTempo,melhorVolta);
	printf("\nA média das voltas é %.2f.",(media/voltas));
	
    return 0;
}
