#include<stdio.h>
#include<stdlib.h>
main(){
 	float a,b,conta;
	float *gasolina, *etanol;
	gasolina = &a; 	etanol = &b;
	printf("Informe o valor da gasolina..:");
	scanf("%f", &(*gasolina));
	printf("Informe o valor da Etanol..:");
	scanf("%f", &(*etanol));
	conta = ((*etanol)/(*gasolina))*100;
	if(conta>70){
		printf("Gasolina e mais viavel");
	}else{
		printf("Etanol e mais viavel");
	}
}