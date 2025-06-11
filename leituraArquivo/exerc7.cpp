/* Apresenta frases - Ana Beatriz Bento Silva */
#include <stdio.h>

int main(void){
	FILE *PTRARQ;
	char RESP, FRASE[81];
	RESP = 'S';
	PTRARQ = fopen("FRASE2.txt", "r");
	while(fgets(FRASE, 80, PTRARQ) != NULL){
		printf("%s", FRASE);
	}
	
	fclose(PTRARQ);
	return (0);
}