#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct Aviao{
	char modelo[50];
	char uso[30];
	char pais[20];
	int mes, ano;	
	
};

main(){
	setlocale(LC_ALL, "Portuguese");
	int i, v;
	
	printf("Quantos aviões deseja cadastrar: ");
	scanf("%d", &v);
	
	struct Aviao aviao[v];
	
	for(i = 0; i < v; i++){
		printf("-----------------------------\n");
		printf("Qual o modelo do avião: ");
		scanf("%s", aviao[i].modelo);
		
		printf("Tipo de uso: ");
		scanf("%s", aviao[i].uso);
		
		printf("País de origem: ");
		scanf("%s", aviao[i].pais);
		
		printf("Digite o mês de fabricação: ");
		scanf("%d", &aviao[i].mes);
		
		printf("Digite o ano de fabricação: ");
		scanf("%d", &aviao[i].ano);
		
	}
	
	printf("\n\n");
	printf("=-=-=-=-=-=- Avião(ões) =-=-=-=-=-=\n");
	
	for(i = 0; i < v; i++){
	
		printf("%d - Avião\n", (i+1));
		printf("Modelo do avião: %s\n", aviao[i].modelo);
		printf("Tipo de uso: %s\n", aviao[i].uso);
		printf("País de origem: %s\n", aviao[i].pais);
		printf("Data de fabricação:  %d / %d \n", aviao[i].mes, aviao[i].ano);
		printf("\n");
	}
}