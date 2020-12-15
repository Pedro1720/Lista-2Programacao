

#include<stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n,m,l,c,maior;
	printf("\nDigite o número de linhas(N):\n");
	scanf("%d",&n);
	printf("\nDigite o número de colunas(M):\n");
	scanf("%d",&m);
	
	int matriz[n][m];
	
	printf("\nDigite os valores da matriz:\n\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\nmatriz[%d][%d]=",l,c);
			scanf("%d",&matriz[l][c]);
			if(l==0&c==0){
				maior=matriz[l][c];
			}else if(matriz[l][c]>maior){
				maior=matriz[l][c];
			}
		}
	}
	
	printf("\nA matriz digitada foi:\n\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz[l][c]);
		}
		printf("\n");
	}
	printf("\nO maior número da matriz é %d.",maior);
	
    return 0;
}
