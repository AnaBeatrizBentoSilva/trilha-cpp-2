#include <stdio.h>
#include <stdlib.h>

//Ana Beatriz Bento Silva
//Função (Cálculo de três números)
	
//Declração da Função Calc - Processamento
int calc(float n1, float n2, float n3){
	return (n1 * n1) + n2 + n3;
}
	
int main(){
	//Declaração de variáveis
	float n1, n2, n3;
	
	//Entrada
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	
	printf("Digite o terceiro numero: ");
	scanf("%f", &n3);
	
	//Saída
	int resultado = calc(n1, n2, n3);
	printf("Resultado: %d\n", resultado);       
	
	system("pause");
	return 0;
}