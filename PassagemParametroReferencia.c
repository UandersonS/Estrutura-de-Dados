#include <stdio.h>
#include <stdlib.h>

void saques(float *a){
	int i;
	float s;
	float saldoAtual;
	saldoAtual = *a;
	printf("O Senhor deseja realizar um saque?");
	printf("/n 1 = SIM \n 0 = NAO");
	scanf("%d", &i);
	
	if(i == 0){
		printf("%f", &a);
	}else if(i == 0){
		while (i != 0){
			printf("Qual valor do SAQUE? \n");
			scanf("%f", &s);
			saldoAtual = saldoAtual - s;
			printf("Saldo Anterior: R$ %.2f", a);
			printf("Valor Sacado: R$ %.2f\n", s);
			printf("Saldo Atual: R$ %.2f \n\n", saldoAtual);
			printf("Deseja realizar outro saque?\n");
			printf("1 = SIM \n 2 = NAO");
			scanf("%d", &i);
			
			if (saldoAtual <= 0){
				printf("SALDO INDIPONÍVEL PARA SAQUE \n\n");
				system("PAUSE");
			}
			
		}
	}
	
}

main(){
	float saldo, sacado;
	printf("Digite o valor disponivel na conta: ");
	scanf("%f", saldo);
	saques(&saldo);//chamar a função	
}