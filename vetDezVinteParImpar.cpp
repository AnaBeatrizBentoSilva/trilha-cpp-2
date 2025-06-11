#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//3 funções - Vetor com números de 10 a 20, mostrar os elementos pares de trás para frente, mostrar os números impares
//Ana Beatriz Bento Silva

//Primeira Função que Preenche o Vet
void incluivet(int vetor[]){
	//Declaaração de variáveis
	int i;
	
	printf("Elementos do Vetor: ");
	for(i = 0; i < 11; i++){
		vetor[i] = 10 + i;
		printf("%d ", vetor[i]);
	}
	printf("\n");
	return;
}

//Segunda Funcção 
void paresvet(int vetor[]){
	//Declaaração de variáveis
	int i;

	printf("Elementos Pares do Vetor: ");
	for(i = 10; i >= 0; i--){
		if(vetor[i] % 2 == 0){
			printf("%d ", vetor[i]);
		}
	}
	printf("\n"); 
	return;                                                                            
}

//Terceira Funcção 
void imparvet(int vetor[]){
	//Declaaração de variáveis
	int i;              
    
    printf("Elementos Impares do Vetor: ");
	for(i = 0; i < 11; i++){
		if(vetor[i] % 2 != 0){
			printf("%d ", vetor[i]);
		}
	}
	printf("\n");   
	return;                                                                          
}

//Saída - Chamada das função
int main(){
	//Declaração de variáveis
	int vetor[11];
	
	incluivet(vetor);
	paresvet(vetor);
	imparvet(vetor);
	
	system("pause");
	return 0;
}