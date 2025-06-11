/* Leitura de arquivo texto - Ana Beatriz Bento Silva */
#include <stdio.h>

int main(void){
	FILE *PTRARQ;
	char PALAVRA[20];
	PTRARQ = fopen("ARQTXT01.txt", "r");
	fscanf(PTRARQ, "%s", PALAVRA);
	
	printf("Palavra = %s", PALAVRA);
	fclose(PTRARQ);
	
	return (0);
}