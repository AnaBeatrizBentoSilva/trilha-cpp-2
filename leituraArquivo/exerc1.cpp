/* Criação de arquivo texto - Ana Beatriz Bento Silva */
#include <stdio.h>

int main(void){
	FILE *PTRARQ;
	PTRARQ = fopen("ARQTXT01.txt", "a");
	fclose(PTRARQ);
	
	return (0);
}