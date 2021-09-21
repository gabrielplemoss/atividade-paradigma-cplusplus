#ifndef ALUNO_H
#define ALUNO_H

class Aluno{
	private:
		std::string nome;
		double notas[3];
		std::string situacao;
	public:
		double notaFinal();
		void resultadoFinal();
		void setSituacao();
		void getNotas(double notas[3]);	
};

void Aluno::getNotas(double notas[3]){	
	int arrayNotas = sizeof this->notas / sizeof this->notas[0];
	for(int i = 0; i < arrayNotas; i++){
		this->notas[i] = notas[i];
	}
}

double Aluno::notaFinal(){
	double total;
	int arrayNotas = sizeof notas / sizeof notas[0];
	for(int i = 0; i < arrayNotas; i++){
		total = total + notas[i];
	}
	return total;
}

void Aluno::setSituacao(){
	if(notaFinal() >= 60){
		situacao = "Aprovado";
	} else {
		situacao = "Reprovado";
	}	
}

void Aluno::resultadoFinal(){
	setSituacao();
	if(situacao.compare("Reprovado") == 0){
		std::cout << "Reprovado" << "\n";
		std::cout << "Faltaram " <<  60 - notaFinal() << " pontos\n";
	} else {
		std::cout << "Aprovado";
	}
}

#endif
