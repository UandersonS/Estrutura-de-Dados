#include<stdio.h>
#include<stdlib.h>

void saques(float a){
	int i;
	float s,s_atual;
	s_atual =a;
	printf("Deseja realizar um saque? \n 1 para SIM 0 para NAO \n");
	scanf("%d", &i);
	
	if (i == 0){
		printf("%f", a);
	}else if (i == 1){
		while (i != 0){
			printf("Qual valor deseja sacar? \n");
			scanf("%f", &s);
			s_atual = s_atual-s;
			printf("Saldo anterior: R$ %.2f \nvalor sacado R$ :%.2f \nsaldo atual: R$ %.2f \n", a, s, s_atual);
			
			printf("Deseja realizar outro saque? \n 1 para SIM 0 para NAO\n");
			scanf("%d", &i);
			
			if (s_atual == 0){
				printf("SALDO INDISPONIVEL\n\n");
				system("PAUSE");
			}
		}
	}
}

main(){
	
	float saldo, saque;
	printf("Digite o saldo disponivel na conta: ");
	scanf("%f", &saldo);
	
	saques(saldo);
	
}