#include <stdio.h>
#include <stdlib.h>

//Ana Beatriz Bento Silva
//Dados N e M, exibe resultado N*M, sem usar o operador *

int main(){
	
	//Declaração de variaveis
	int N, M, Result, i;
	
	//Entrada
	printf("Calcular o resultado de N*M!\n\n");
	
	printf("Digite um valor do tipo inteiro para de N!:\n");
	scanf("%d", &N);
	printf("Digite um valor do tipo inteiro para de M!:\n");
	scanf("%d", &M);
	
	//Processamento
	for(i=0; i<N; i++){
		Result = Result + M;
	}
	
	//Saída
	printf("O resultado da N*M: %d\n", Result);
	
	system("pause");
	return 0;
}