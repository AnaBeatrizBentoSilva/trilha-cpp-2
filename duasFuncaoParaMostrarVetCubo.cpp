#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Vetor com 5 posições mostrr outro vetor com o cubo dos números - Chamar duas funções
//Ana Beatriz Bento Silva

//Primeira Função que Preenche o Vet
void incluivet(){
	//Declaaração de variáveis
	int vet[5];
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Digite um numeros para o vetor %d: ", i);
		scanf("%d",&vet[i]);
	}
	printf("\n");
	return;
}

//Segunda Funcção 
void mostrarvet(){
	//Declaaração de variáveis
	int vet[5];
	int i;

	for(i = 0; i < 5; i++){
		printf("O vetor na posicao %d tem o conteudo: %d \n", i, vet[i]);
	}
	printf("\n");
	return;
}

//Terceira Funcção 
void cubovet(){
	//Declaaração de variáveis
	int vet[5];
	int i;
	int cubvetor[5];
	
	//Processamento
	for(i = 0; i < 5; i++){
        cubvetor[i] = pow(vet[i], 3);
    }
    
    for(i = 0; i < 5; i++){
        printf("O vetor do cubo na posicao %d = %d\n", i, cubvetor[i]);
    }
    printf("\n");
    return;
}

//Saída - Chamada das função
int main(){
	incluivet();
	mostrarvet();
	cubovet();
	
	system("pause");
	return 0;
}