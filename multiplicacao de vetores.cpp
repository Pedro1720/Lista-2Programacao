
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	int tamanho = 0,escolha=0,k, numAleatorio, pares=0;
	float soma=0;
	setlocale(LC_ALL, "Portuguese");
	printf("Qual o tamanho dos vetores?\n");
	scanf("%i",&tamanho);
	
	int vetor1[tamanho], vetor2[tamanho], vetor3[tamanho];
	
	printf("\nEscolha entre Digitar ou Gerar os vetores:\n(1-Digitar) (2-Gerar)\n");
	
	
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
		printf("\n\nDigite os valores do 1º vetor:\n\n");
		for(k=0;k<tamanho;k++){
			printf("[%d] = ",k);
			scanf("%i",&vetor1[k]);
		}
		printf("\n\nDigite os valores do 2º vetor:\n\n");
		for(k=0;k<tamanho;k++){
			printf("[%d] = ",k);
			scanf("%i",&vetor2[k]);
		}
	}else if(escolha == 2){
		printf("\n\nGerando os valores do 1º vetor.\n\n");
		for(k=0;k<tamanho;k++){
			numAleatorio = rand() % 10;
			printf("[%d] = %d\n",k,numAleatorio);
			vetor1[k] = numAleatorio;
		}
		printf("\n\nGerando os valores do 2º vetor.\n\n");
		for(k=0;k<tamanho;k++){
			numAleatorio = rand() % 10;
			printf("[%d] = %d\n",k,numAleatorio);
			vetor2[k] = numAleatorio;
		}
	}
	
	printf("\n\nMultiplicação:\n");
	for(k=0;k<tamanho;k++){
		vetor3[k] = vetor1[k]*vetor2[k];
		printf("\n%d * %d = %d",vetor1[k],vetor2[k],vetor3[k]);
	}
	
	printf("\n\nVetor resultante:\n\n");
	
	for(k=0;k<tamanho;k++){
		printf("[%d] = %d\n",k,vetor3[k]);
	}
	
	
    return 0;
}
