#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

class Funcionario{
	private:
		std::string nome;
		double salarioBruto;
		double salarioComAumento;
		double imposto;
	public:		
		void setNome(std::string nome);		
		std::string getNome();		
		void setSalarioBruto(double salarioBruto);		
		double getSalarioComAumento();		
		double salarioLiquido();
		void aumentarSalario(double porcentagem);
		void setImposto(double imposto);
};

double Funcionario::salarioLiquido(){
	return salarioBruto - imposto;
}

void Funcionario::aumentarSalario(double porcentagem){
	salarioComAumento = salarioBruto + (salarioBruto * (porcentagem / 100)) - imposto;
}

void Funcionario::setNome(std::string nome){
	this->nome = nome;
};

std::string Funcionario::getNome(){
	return nome;
};

void Funcionario::setSalarioBruto(double salarioBruto){
	this->salarioBruto = salarioBruto;
};
void Funcionario::setImposto(double imposto){
	this->imposto = imposto;
};

double Funcionario::getSalarioComAumento(){
	return salarioComAumento;
}

#endif
