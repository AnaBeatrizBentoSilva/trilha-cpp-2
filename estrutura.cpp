#include <stdio.h>
#include <stdlib.h>

//Ana Beatriz Bento Silva
//Estrutura

int main(){
	
	//Criação de estrutura
	struct dma{
		int dia;
		int mes;
		int ano;
	};
	
	typedef struct dma data;
	data venc, nasc;
	
	venc.dia = 1;
	venc.mes = 12;
	venc.ano = 1987;
	
	printf("%d/%d/%d \n", venc.dia, venc.mes, venc.ano);
	
	system("pause");
	return 0;
}