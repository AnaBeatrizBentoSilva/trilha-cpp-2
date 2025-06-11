#include <stdio.h>
#include <stdlib.h>

//Ana Beatriz Bento Silva
//Maior valor, o menor valor, média

int main(){
	
	//Declaração de variaveis
	int num, i, maior, menor;
	float soma, media;
	
	//Entrada
	for(i=0; i<5; i++){
		printf("Digite um valor inteiro positivo: \n");
		scanf("%d", &num);
	
	//Processamento
	if(i == 0){
		maior = num;
		menor = num;
		soma = num;
	}else{
		if(num > maior){
			maior = num;
		}
		if(num < menor){
			menor = num;
		}
		soma = soma + num;
		}
	}
	media = soma/5;
	
	//Saída
	printf("O maior valor digitado: %d \n", maior);
	printf("O menor valor digitado: %d \n", menor);
	printf("A media dos valores digitado: %.2f \n", media);
	
	system("pause");
	return 0;
}