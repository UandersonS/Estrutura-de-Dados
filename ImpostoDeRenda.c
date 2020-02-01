#include<stdio.h>
#include<stdlib.h>

main(){
	
	int x, i, tam;
	float inss,irpf,conta;
    
	printf("Informe a quantidade de funcionarios..:");
	scanf("%d", &x);
	
	int id[x];
	float sal_bruto[x],sal_liq[x];
	for(i = 1;i <= x; i++){
		printf("Codigo funcionario %d..:", i);
		scanf("%i", &id[i]);
		printf("Salario funcionario %d..:", i);
		scanf("%f", &sal_bruto[i]);
		
		if(sal_bruto[i]<=1751.81){
			inss= (sal_bruto[i]*0.08);
		}
		else if(sal_bruto[i]>1751.81 && sal_bruto[i]<=2919.72){
			inss= (sal_bruto[i]*0.09);
		}
		else if(sal_bruto[i]>2919.72 && sal_bruto[i]<= 5839.45){
			inss= (sal_bruto[i]*0.11);
		}	
		
		
		if(sal_bruto[i]>1903.98 && sal_bruto[i]<=2826.65){
			irpf =	(sal_bruto[i]*0.075);
		}
		else if(sal_bruto[i]>2826.65 && sal_bruto[i]<=3751.05){
			irpf =	(sal_bruto[i]*0.15);
		}
		else if(sal_bruto[i]>3751.05 && sal_bruto[i]<=4664.68){
			irpf =	(sal_bruto[i]*0.225);
		}	
		else if (sal_bruto[i]>4664.68){
			irpf =	(sal_bruto[i]*0.275);
		}
		
		conta = sal_bruto[i]*0.04+sal_bruto[i]*0.015+irpf+inss;
		sal_liq[i]= sal_bruto[i]-conta;
		
		
	}
	
	for(i = 1;i <= x; i++){
    	printf("Codigo funcionario %d \n Salario bruto %.2f \n Salario Liquido %.2f \n", id[i], sal_bruto[i],sal_liq[i]);
	
	}
}