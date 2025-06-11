/* Ana Beatriz Bento Silva */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <iostream>
#include <fstream>


int main(){
	//Abre um arquivo txt chamado "saida.txt" para gravação
	std::ofstream arquivo("saida.txt");
	
	//Verifica se o arquivo foi aberto corretamente
	if(!arquivo){
		std::cerr << "Erro ao criar o arquivo!" << std::endl;
		return 1;
	}
	
	//A string que será gravada no arquivo
	std::string texto = "Este é a string que será gravado no arquivo.";
	
	//Fecha o arquivo
	arquivo.close(); 
	
	std::cout << "String gravada com sucesso no arquivo!" << std::endl;
	
	system("pause");
	return (0);
}