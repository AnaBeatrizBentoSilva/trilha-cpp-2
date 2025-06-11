#include <stdio.h>
#include <stdlib.h>

//Ana Beatriz Bento Silva
//Somar duas matrizes

int main(){
	
	//Declaração de variaveis
	int mat1[2][2], mat2[2][2], mat3[2][2], linha, coluna;
	
	//Entrada
	for(linha = 0; linha <= 1; linha ++){
		for(coluna = 0; coluna <= 1; coluna ++){
			printf("Digite um numero inteiro para mat1[%d][%d]: \n", linha, coluna);
			scanf("%d", &mat1[linha][coluna]);
		}
	}
	
	for(linha = 0; linha <= 1; linha ++){
		for(coluna = 0; coluna <= 1; coluna ++){
			printf("Digite um numero inteiro para mat2[%d][%d]: \n", linha, coluna);
			scanf("%d", &mat2[linha][coluna]);
		}
	}

	//Processamento
	for(linha = 0; linha <= 1; linha ++){
		for(coluna = 0; coluna <= 1; coluna ++){
			mat3[linha][coluna] = mat1[linha][coluna] + mat2[linha][coluna];
		}
	}
	
	//Saída
	printf("\nMatriz 1: \n");
	for(linha = 0; linha <= 1; linha ++){
		for(coluna = 0; coluna <= 1; coluna ++){
			printf(" | %d | ", mat1[linha][coluna]);
		}
		printf("\n");
	}
	
	printf("\nMatriz 2: \n");
	for(linha = 0; linha <= 1; linha ++){
		for(coluna = 0; coluna <= 1; coluna ++){
			printf(" | %d | ", mat2[linha][coluna]);
		}
		printf("\n");
	}
	
	printf("\nO resultado da soma das matrizes: \n");
	for(linha = 0; linha <= 1; linha ++){
		for(coluna = 0; coluna <= 1; coluna ++){
			printf(" | %d | ", mat3[linha][coluna]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}