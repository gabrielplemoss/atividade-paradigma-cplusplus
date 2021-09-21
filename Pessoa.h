#ifndef PESSOA_H
#define PESSOA_H

class Pessoa{
	private:
		std::string nome;
		int idade;
	public:
		void setNome(std::string nome);
		void setIdade(int idade);
		std::string getNome();
		int getIdade();
};

void Pessoa::setNome(std::string nome){
	this->nome = nome;
}

void Pessoa::setIdade(int idade){
	this->idade = idade;
}

int Pessoa::getIdade(){
	return idade;
}

std::string Pessoa::getNome(){
	return nome;
}

#endif
