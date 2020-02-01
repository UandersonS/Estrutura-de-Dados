#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define QT_ALUNOS 10

struct Aluno{
	char nome[50], curso[50], disciplina[100];
	int dia, mes, ano, idade, semestre;
};

main(){
	setlocale(LC_ALL, "Portuguese");
	struct Aluno aluno[10];
	
	int i , j;
	
	for (i = 0; i < QT_ALUNOS; i++){
		printf("=-=-=-=-=-=- Aluno (%d) =-=-=-=-=-=-\n", (i+1));
		
		printf("Nome do aluno: ");
		scanf(" %[^\n]s", aluno[i].nome);  // " %[^\n]s" ler o nome aceitando espaços entre as palavras
		
		printf("\n");
		
		printf("Data de nascimento \n");
		
		printf("Dia: ");
		scanf("%d", &aluno[i].dia);
		printf("Mês: ");
		scanf("%d", &aluno[i].mes);
		printf("Ano: ");
		scanf("%d", &aluno[i].ano);
		
		printf("\n");
		
		printf("Idade: ");
		scanf("%d", &aluno[i].idade);
		
		printf("\n");
		
		printf("Nome do curso: ");
		scanf(" %[^\n]s", aluno[i].curso);
		
		printf("\n");
		printf("Disciplinas\n");
		
		for (j = 0; j < 5; j++){
			printf("(%d): ", (j+1));
			scanf(" %[^\n]s", aluno[j].disciplina);		
		}				
	}
	
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("                  DADOS DOS ALUNOS\n");
	
	for (i = 0; i < QT_ALUNOS; i++){
		printf("|%d - Aluno|\n", (i+1));
		printf("Nome do aluno: %s\n", aluno[i].nome);
		
		printf("Data de Nascimento: %d / %d / %d\n", aluno[i].dia, aluno[i].mes, aluno[i].ano);
		
		printf("Idade: %d\n", aluno[i].idade); 
		
	 	printf("Nome do curso: %s\n", aluno[i].curso);
	 	
	 	printf("Disciplinas\n");
	 	
	 	for (j = 0; j < 5; j++){
			printf("(%d): %s\n", (j+1), aluno[j].disciplina);
		}	
		printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	} 
		
}