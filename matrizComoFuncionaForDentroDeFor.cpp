#include <stdio.h>
#include <stdlib.h>

//Ana Beatriz Bento Silva
//Matriz: Como funciona for dentro de for

int main(){
	
	//Declaração de variaveis
	int mat[2][2];
	int linha, coluna;
	
	//Saída
	for(linha=0; linha<2; linha++){
		for(coluna=0; coluna<2; coluna++){
			printf("linha: %d \n", linha);
			printf("coluna: %d \n\n", coluna);
		}
	}
	
	system("pause");
	return 0;
}