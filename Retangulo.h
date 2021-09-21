#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo{
	private:
		double largura;
		double altura;
	public:
		double area();
		double perimetro();
		double diagonal();
		void setLargura(double largura);
		void setAltura(double altura);
};

double Retangulo::area(){
	return largura * altura;
}

double Retangulo::perimetro(){
	return (2 * largura) + (2 * altura);
}

double Retangulo::diagonal(){
	return sqrt(pow(largura, 2) + pow(altura, 2));
}

void Retangulo::setLargura(double largura) {
  this->largura = largura;
}

void Retangulo::setAltura(double altura) {
  this->altura = altura;
}

#endif
