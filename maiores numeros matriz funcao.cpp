

int buscaNumero(int num,int n,int m,int matriz[n][m]){
	int l,c,cont=0;
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			//printf("%d  ",matriz[l][c]);
			if(matriz[l][c]>num){
				cont++;
			}
		}
	//	printf("\n");
	}
	return cont;
}
#include<stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n,m,l,c,num;
	
	
	printf("\nDigite o número de linhas(N):\n");
	scanf("%d",&n);
	printf("\nDigite o número de colunas(M):\n");
	scanf("%d",&m);
	printf("\nDigite o número que deve ser buscado:\n");
	scanf("%d",&num);
	
	int matriz[n][m];
	
	printf("\nDigite os valores da matriz:\n\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\nmatriz[%d][%d]=",l,c);
			scanf("%d",&matriz[l][c]);
		}
	}
	
	printf("\nA matriz digitada foi:\n\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz[l][c]);
		}
		printf("\n");
	}
	printf("\nExistem %d números maiores que %d.",buscaNumero(num,n,m,matriz),num);
	
	
	
    return 0;
}
