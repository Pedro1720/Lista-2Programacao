
#include <stdio.h>
#include <locale.h>
 
int main()
{
	setlocale(LC_ALL, "Portuguese");
    int quantidadeAlunos,k,l,pontuacao[10];
    char gabarito[10],respostas[10];
   
    printf("Quantos alunos tem a turma?\n");
    scanf("%i",&quantidadeAlunos);
   
    char nomesAlunos[quantidadeAlunos][100];
   
    printf("\nDigite os nomes dos Alunos:\n\n");
    for(k=0;k<quantidadeAlunos;k++){
        printf("[%i] - ",k);
        scanf("%s",&nomesAlunos[k]);
        pontuacao[k]=0;
    }
   
    printf("\n");
   
    
    printf("\n\nAgora digite o gabarito da prova:");
    printf("\nExemplo:\nQuestão 1: A\n\n");
   
    for(k=0;k<10;k++){
        printf("\nQuestão %d: ",k);
        scanf("%s",&gabarito[k]);
    }
    printf("\n\nDigite agora as resposta de cada aluno:\n\n");
   
    for(k=0;k<quantidadeAlunos;k++){
        for(l=0;l<10;l++){
            printf("\nAluno %s, Questao %d:",nomesAlunos[k],l);
            scanf("%s",&respostas[l]);
            if(respostas[l]==gabarito[l]){
            	pontuacao[k]++;
         	
            	
            }
            
        }
        printf("\n\n");
    }
   
    printf("Resultado final:\n\n");
   
    for(k=0;k<quantidadeAlunos;k++){
        printf("\nAluno %s tem %d acertos.",nomesAlunos[k],pontuacao[k]);
    }
    return 0;
}
