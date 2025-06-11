#include <stdio.h>
#include <stdlib.h>

//Ana Beatriz Bento Silva
//Matriz: Armazenar 4 números inteiros em uma matriz 2x2

int main(){
	
	//Declaração de variaveis
	int mat[2][2];
	int linha, coluna;
	
	//Entrada
	for(linha=0; linha<2; linha++){
		for(coluna=0; coluna<2; coluna++){
			printf("Informe um valor inteiro para lin %d e col %d: \n", linha, coluna);
			scanf("%d", &mat[linha][coluna]);
		}
	}
	
	//Saída
	for(linha=0; linha<2; linha++){
		for(coluna=0; coluna<2; coluna++){
			printf(" | %d | ", mat[linha][coluna]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}