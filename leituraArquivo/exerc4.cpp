/* Cria e grava frases caractere a caractere- Ana Beatriz Bento Silva */
#include <stdio.h>

int main(void){
	FILE *PTRARQ;
	char LETRA;
	PTRARQ = fopen("FRASE1.txt", "w");
	
	printf("\n\nEscreva a frase desejada\n\n");
	
	while((LETRA = getchar()) != '\n'){
		putc(LETRA, PTRARQ);
	}
	fclose(PTRARQ);
	return (0);
}