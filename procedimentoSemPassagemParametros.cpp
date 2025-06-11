#include <stdio.h>
#include <stdlib.h>

//Ana Beatriz Bento Silva
//Procedimento(com passagem de parâmetro)
	
//Procedimento
void imprimeLinha_3(){
	int i;
	for(i = 0; i < 3; i++){
		printf("+");
	}
	printf("\n");
}
	
void imprimeLinha_5(){
	int i;
	for(i = 0; i < 5; i++){
		printf("-");
	}
	printf("\n");
}
	
void imprimeLinha_7(){
	int i;
	for(i = 0; i < 7; i++){
		printf("/");
	}
	printf("\n");
}
	
//Saída(Chamando os procedimentos)
int main(){
	imprimeLinha_3();
	imprimeLinha_5();
	imprimeLinha_7();
	imprimeLinha_5();
	imprimeLinha_3();
	
	system("pause");
	return 0;
}