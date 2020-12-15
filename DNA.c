
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	int tamanho = 0,escolha=0,k, numAleatorio, pares=0;
	float soma=0;
	setlocale(LC_ALL, "Portuguese");
	printf("Qual o tamanho do vetor?\n");
	
	do{
	scanf("%i",&tamanho);
	if(tamanho>50){
		printf("\nTamanho máximo de 50 bases nitrogenadas.");
		printf("\nQual o tamanho do vetor?\n");
	}
		
	}while(tamanho>50);
	
	char vetor[tamanho];
	
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
		for(k=0;k<tamanho;k++){
			printf("[%d] = ",k);
			scanf(" %c",&vetor[k]);
			vetor[k] = toupper(vetor[k]);
		}
	}else if(escolha == 2){
		printf("\n\nGerando os valores do vetor.\n\n");
		for(k=0;k<tamanho;k++){
			numAleatorio = rand() % 4;
			switch(numAleatorio){
				case 0:
					vetor[k] = 'A';
					printf("[%d] = %c\n",k,'A');
					break;
				case 1:
					vetor[k] = 'T';
					printf("[%d] = %c\n",k,'T');
					break;
				case 2:
					vetor[k] = 'C';
					printf("[%d] = %c\n",k,'C');
					break;
				case 3:
					vetor[k] = 'G';
					printf("[%d] = %c\n",k,'G');
					break;
			}
		}
	}
	
	printf("\n\nO vetor contém os seguintes valores:\n\n");
	
	for(k=0;k<tamanho;k++){
		printf("%c",vetor[k]);
	}
		
	printf("\n\nO vetor complementar ao vetor DNA contém os seguintes valores:\n\n");
	
	for(k=0;k<tamanho;k++){
		switch(vetor[k]){
			case 'A':
				vetor[k] = 'T';		
				break;
			case 'T':
				vetor[k] = 'A';
				break;
			case 'C':
				vetor[k] = 'G';
				break;
			case 'G':
				vetor[k] = 'C';
				break;
		}
		printf("%c",vetor[k]);			
	}	
    return 0;
}
