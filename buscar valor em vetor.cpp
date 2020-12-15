
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tamanho = 0,escolha=0,k, numAleatorio, soma=0,valor,tvalor=0;

	printf("Qual o tamanho do vetor?\n");
	scanf("%d",&tamanho);	
	int vetor[tamanho];
	
	printf("Qual valor você deseja procurar no vetor?\n");
	scanf("%d",&valor);
	

	printf("\n\nDigite os valores do vetor:\n\n");
	for(k=0;k<tamanho;k++){
		printf("[%d] = ",k);
		scanf("%i",&vetor[k]);
	}

	printf("\n\nO vetor contém os seguintes valores:\n\n");
	
	for(k=0;k<tamanho;k++){
		printf("[%d] = %d\n",k,vetor[k]);
		if(vetor[k] == valor){
			tvalor++;
		}
	}
	
	printf("\n\nO valor %d apareceu %d vezes.",valor,tvalor);
		

	
	
	
    return 0;
}

