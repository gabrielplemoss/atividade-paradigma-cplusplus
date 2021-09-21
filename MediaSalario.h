#ifndef MEDIASALARIO_H
#define MEDIASALARIO_H

class MediaSalario{	
	private:
		std::string nome;
  	double salario;
	public:
		void setNome(std::string nome);
		void setSalario(double salario);
		double getSalario();
};

void MediaSalario::setNome(std::string nome){
	this->nome = nome;
}

void MediaSalario::setSalario(double salario){
	this->salario = salario;
}

double MediaSalario::getSalario(){
	return salario;
}




#endif
