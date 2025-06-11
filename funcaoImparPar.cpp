#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Ana Beatriz Bento Silva
//Função (Número Impar ou Par)
	
//Declração da Função
int verifPar(int k){
	if(k%2 == 0){
		return 1;
	}else{
		return 0;
	}
}
	
//Saída(Chamando os procedimentos)
int main(){
	//Habilita a acentuaçõ para o português
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variáveis
	int num, resultdo;
	
	//Entrada
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	//Processamento
	resultdo = verifPar(num);
	
	//Saída
	if(resultdo == 1){
		printf("\nO numero que voce digitou e par\n");
	}else{       
		printf("\nO numero que voce digitou nao e par\n");
	}            
	
	system("pause");
	return 0;
}