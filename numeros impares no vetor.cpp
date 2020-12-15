
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	int tam = 0,escolha=0,k, numA, imp=0;
	setlocale(LC_ALL, "Portuguese");
	printf("Qual o tamanho do vetor?\n");
	scanf("%i",&tam);
	
	int vetor[tam];
	
	printf("\nEscolha entre Digitar ou Gerar o vetor:\n(1-Digitar) (2-Gerar)\n");
	
	
	do{
		if(escolha == 0){
			scanf("%i",&escolha);
		}else if(escolha != 1 && escolha != 2){
			printf("\nOpção Invalida!\nTente outra vez\n");
			printf("\nEscolha entre Digitar ou Gerar o vetor:\n(1-Digitar) (2-Gerar)\n");
			scanf("%i",&escolha);
		}
	
	}while(escolha != 1 && escolha != 2);
	
	if(escolha == 1){
		printf("\n\nDigite os valores do vetor:\n\n");
		for(k=0;k<tam;k++){
			printf("[%d] = ",k);
			scanf("%i",&vetor[k]);
		}
	}else if(escolha == 2){
		printf("\n\nGerando os valores do vetor.\n\n");
		for(k=0;k<tam;k++){
			numA = rand() % 10;
			printf("[%d] = %d\n",k,numA);
			vetor[k] = numA;
		}
	}
	
	printf("\n\nO vetor contém os seguintes valores:\n\n");
	
	
	for(k=0;k<tam;k++){
		printf("[%d] = %d\n",k,vetor[k]);
		if(vetor[k]%2 != 0){
			imp++;
		}
			
	}
	
	printf("\n\nFoi encontrado um total de %d números impares.",imp);
	printf("\n\nSão eles:\n");
	
	for(k=0;k<tam;k++){
		
		if(vetor[k]%2 != 0){
			printf("[%d] = %d\n",k,vetor[k]);
		}
			
	}
		

	
	
	
    return 0;
}
