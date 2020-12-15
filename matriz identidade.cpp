

#include<stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n,m,l,c,par=0,impar=0;
	printf("\nDigite o tamanho:\n");
	scanf("%d",&n);
	
	int matriz[n][n];
	printf("\nA matriz identidade geranda foi:\n\n");
	for(l=0;l<n;l++){
		for(c=0;c<n;c++){
      if(c==l){
        matriz[l][c]=1;
        printf("%d  ",matriz[l][c]);
      }else{
        matriz[l][c]=0;
        printf("%d  ",matriz[l][c]);
      }
			
		}
		printf("\n");
	}
	
    return 0;
}
