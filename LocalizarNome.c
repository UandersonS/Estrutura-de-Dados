#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  char n[10][50], x[50];
  for(int i=0;i<10;i++){
    printf("Digite o %d nome: ", (i+1));
    scanf("%s", n[i]);
  }

  printf("Qual nome deseja localizar: ");
  scanf("%s", x);

  for(int i=0;i<10;i++){
    if(strcmp(n[i], x)==0){
      printf("o nome %s esta na posicao %d \n", n[i], i);
    }
  }

  return 0;
} return 0;
}