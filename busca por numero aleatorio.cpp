

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	int tamanho = 0,k, numAleatorio, numero,totalB=0;
	float soma=0;
	setlocale(LC_ALL, "Portuguese");
	printf("Qual o tamanho do vetor?\n");
	scanf("%i",&tamanho);
	printf("\nQual número voçê deseja procurar no vetor?\n");
	scanf("%d",&numero);
	
	int vetor[tamanho],vetorB[tamanho],vetorPosicao[tamanho];
	
	printf("\n\nGerando os valores do vetor.\n\n");
	for(k=0;k<tamanho;k++){
		numAleatorio = rand() % 10;
		printf("[%d] = %d\n",k,numAleatorio);
		vetor[k] = numAleatorio;
	}
	
	printf("\n\nO vetor contém os seguintes valores:\n\n");
	
	for(k=0;k<tamanho;k++){
		printf("[%d] = %d\n",k,vetor[k]);
		if(vetor[k]==numero){
			vetorB[totalB] = vetor[k];
			vetorPosicao[totalB]=k;
			totalB++;
		}
		
		
	}
	
	if(totalB == 1){
		printf("\n\nFoi encontrado %d número %d, ele estava na seguinte posição:\n",totalB,numero);
	}else{
		printf("\n\nForam encontrados %d números %d, eles estavam nas seguintes posições:\n",totalB,numero);
	}
	
	for(k=0;k<totalB;k++){
		printf("[%d] = %d\n",vetorPosicao[k],vetorB[k]);
	}

	
	
	
    return 0;
}
