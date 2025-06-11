/* Ana Beatriz Bento Silva */
#include <iostream>
//Manipulação de arquivo
#include <fstream>

int main(){
	//Cria e abre um arquivo txt chamado "ARQUIVO.txt" para gravação
	std::ofstream arquivo("ARQUIVO04.txt");
	
	//Verifica se o arquivo foi aberto corretamente
	if(!arquivo){
		std::cerr << "Erro ao criar o arquivo!" << std::endl;
		return 1;
	}
	
	//A string que será gravada no arquivo
	std::string texto = "Este é o conteúdo que será gravado no arquivo.";
	
	//Grava a string no arquivo
	arquivo << texto << std::endl;
	
	//Fecha o arquivo
	arquivo.close();
	
	std::cout << "Arquivo criado e string gravada com sucesso!" << std::endl;
	
	return (0);
}