/* Lê frase caractere a caractere- Ana Beatriz Bento Silva */
#include <stdio.h>

int main(void){
	FILE *PTRARQ;
	char LETRA;
	PTRARQ = fopen("FRASE1.txt", "r");
	
	printf("\n\nFrase = ");
	
	while((LETRA = fgetc(PTRARQ)) != EOF){
		printf("%c", LETRA);
	}
	fclose(PTRARQ);
	return (0);
}
