#include <stdio.h>
#include <stdlib.h>

//Ana Beatriz Bento Silva
//Copiar um vetor em um segundo

int main(){
	
	//Declaração de variaveis
	int vet1[4], vet2[4], aux;
	
	//Entrada
	for(aux=0; aux<=3; aux++){
		printf("Digite um numero inteiro para o vet1 %d: \n", aux);
		scanf("%d", &vet1[aux]);
	}

	//Processamento
	for(aux = 0; aux <= 3; aux++)
		vet2[aux] = vet1[aux];
	
	
	//Saída
	for(aux = 0; aux<=3; aux++)
		printf("Vet1: %d \n", vet1[aux]);
	
	printf("\n");
	
	for(aux = 0; aux <= 3; aux++)
		printf("Vet2: %d \n", vet2[aux]);
	
	system("pause");
	return 0;
}