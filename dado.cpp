

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int k,tamanho,face[6];

	printf("Quantas vezes fo dado foi jogado? vetor?\n");
	scanf("%d",&tamanho);
	
	int dado[tamanho];
	
	for(k=0;k<6;k++){
		face[k]=0;
	}
		
	printf("\n\nDigite as faces do dado:\n\n");
	for(k=0;k<tamanho;k++){
		
		scanf("%d",&dado[k]);
		
		switch(dado[k]){
			case 1:
				face[0]=face[0]+1;
				break;
			case 2:
				face[1]=face[1]+1;
				break;
			case 3:
				face[2]=face[2]+1;
				break;
			case 4:
				face[3]=face[3]+1;
				break;
			case 5:
				face[4]=face[4]+1;
				break;
			case 6:
				face[5]=face[5]+1;
				break;
				
		}
		
	}
	printf("\nFace - Número de aparições",(k+1),face[k]);
	for(k=0;k<6;k++){
		printf("\n[%d] - [%d]",(k+1),face[k]);
		
	}
	
    return 0;
}
