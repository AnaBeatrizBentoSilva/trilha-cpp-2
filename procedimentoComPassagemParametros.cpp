#include <stdio.h>
#include <stdlib.h>

//Ana Beatriz Bento Silva
//Procedimento(com passagem de parâmetro)
	
//Procedimento
void imprimeCh(char ch, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%c", ch);
	}
	printf("\n");
}
	
//Saída(Chamando os procedimentos)
int main(){
	imprimeCh('+', 3);
	imprimeCh('-', 5);
	imprimeCh('*', 7);
	imprimeCh('/', 5);
	imprimeCh('=', 3);
	
	system("pause");
	return 0;
}