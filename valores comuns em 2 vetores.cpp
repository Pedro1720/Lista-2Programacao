

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vetorResultado[100],k,auxV1,auxV2,auxV3=0,n,m;

	printf("Qual o tamanho do vetor A?");
	scanf("%d",&n);
	int vetor1[n];
		
	printf("Digite os valores do vetor A:\n\n");
	
	for(k=0;k<n;k++){
		scanf("%d",&vetor1[k]);
	}
	
	printf("Qual o tamanho do vetor B?");
	scanf("%d",&m);
	int vetor2[m];
	
	printf("\nDigite os valores do vetor B:\n\n");
	
	for(k=0;k<m;k++){
		scanf("%d",&vetor2[k]);
	}
	
	for(auxV1=0;auxV1<n;auxV1++){
		for(auxV2=0;auxV2<m;auxV2++){
			if(vetor1[auxV1]==vetor2[auxV2]){
				vetorResultado[auxV3]=vetor1[auxV1];
				auxV3++;
			}
		}
	}
	
	printf("Valores em comum:\n\n");
	
	for(k=0;k<auxV3;k++){
		printf(" %d\n",vetorResultado[k]);
	}
	
	
    return 0;
}
