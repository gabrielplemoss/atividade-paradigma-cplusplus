#include<iostream>
#include<cmath>
#include"Retangulo.h"
#include"Funcionario.h"
#include"Aluno.h"
#include"MediaSalario.h"
#include"Pessoa.h"

int main(){
	
	int sair = 1;
	
	while(sair != 0){
		system("cls");
		std::cout << "--------------------MENU--------------------\n";
		std::cout << "1 - Calcular a maior idade" << "\n";
		std::cout << "2 - Media salarial de 2 pessoas" << "\n";
		std::cout << "3 - calcular area,perimetro e diagonal do retangulo " << "\n";
		std::cout << "4 - calcular salario de um funcionario" << "\n";
		std::cout << "5 - calcular media de um aluno" << "\n";
		std::cout << "0 - Sair" << "\n";
		std::cout << "Escolha uma das opcoes: ";
		std::cin >> sair;
		switch(sair){
			case 0: {
				break;
			}
			
			case 1: {
				system("cls");
				std::cout << "1 - Calcular a maior idade" << "\n";
				
				int buff;
				Pessoa *pessoa1 = new Pessoa();
				Pessoa *pessoa2 = new Pessoa();
				std::string nome;
				int idade;
				std::string maisVelha;
				
				std::cout << "Dados da primeira pessoa:\n";
				std::cout << "Nome: ";
				std::cin >> nome;
				while ((buff = getchar()) != '\n' && buff != EOF) { }
				pessoa1->setNome(nome);
				std::cout << "idade: ";
				std::cin >> idade;
				pessoa1->setIdade(idade);
				
				std::cout << "Dados da segunda pessoa:\n";
				std::cout << "Nome: ";
				std::cin >> nome;
				while ((buff = getchar()) != '\n' && buff != EOF) { }
				pessoa2->setNome(nome);
				std::cout << "Idade: ";
				std::cin >> idade;
				pessoa2->setIdade(idade);
				
				maisVelha = pessoa1->getIdade() > pessoa2->getIdade() ? pessoa1->getNome() : pessoa2->getNome();
				
				std::cout << "Pessoa mais velha: " << maisVelha << "\n";
				
				system("pause");
				break;
			}				
			case 2: {
				system("cls");
				std::cout << "2 - Media salarial de 2 pessoas" << "\n";
				
				MediaSalario *func1 = new MediaSalario();				
				MediaSalario *func2 = new MediaSalario();
				int buff;
				
				std::string nome;
		  	double salario;
  	
				std::cout << "Dados do primeiro funcionario:\n";
				std::cout << "Nome: ";
				std::cin >> nome;
				while ((buff = getchar()) != '\n' && buff != EOF) { }
				std::cout << "salario: ";
				std::cin >> salario;
				func1->setNome(nome);
				func1->setSalario(salario);
				
				std::cout << "\nDados do segundo funcionario:\n";
				std::cout << "Nome: ";
				std::cin >> nome;
				while ((buff = getchar()) != '\n' && buff != EOF) { }
				std::cout << "Salario: ";
				std::cin >> salario;
				func2->setNome(nome);
				func2->setSalario(salario);
				
				std::cout << "Salario medio R$:" << (func1->getSalario() + func2->getSalario()) / 2 << "\n";
								
				system("pause");
				break;
			}
			case 3:{
				system("cls");
				std::cout << "3 - calcular area,perimetro e diagonal do retangulo " << "\n";
				Retangulo *retangulo = new Retangulo();
				double altura;
				double largura;
				
				std::cout << "Entre com a altura e largura do retangulo: " << "\n";
				
				std::cin >> altura;
				std::cin >> largura;		
				
				
				retangulo->setLargura(altura);
				retangulo->setAltura(largura);
				std::cout << "AREA = " << retangulo->area() << '\n';
				std::cout << "PERIMETRO = " << retangulo->perimetro() << '\n';
				std::cout << "DIAGONAL = " << retangulo->diagonal() << '\n';
				
				system("pause");
				break;
			}
			
			case 4:{
				system("cls");
				std::cout << "4 - calcular salario de um funcionario" << "\n";
				
				int c;				
				Funcionario *funcionario = new Funcionario();
				std::string nome;
				double salarioBruto;
				double imposto;
				double aumento;
				
				std::cout << "Nome: ";
				std::cin >> nome;
				while ((c = getchar()) != '\n' && c != EOF) { }
				
				std::cout << "Salario bruto: ";
				std::cin >> salarioBruto;
				
				std::cout << "Imposto: ";
				std::cin >> imposto;
				
				
				funcionario->setNome(nome);
				funcionario->setSalarioBruto(salarioBruto);
				funcionario->setImposto(imposto);
				
				std::cout << "\nFuncionario: " << funcionario->getNome() << ", R$: " << funcionario->salarioLiquido() << "\n";
				std::cout << "Digite a porcentagem para aumentar o salario: ";
				std::cin >> aumento;
				funcionario->aumentarSalario(aumento);
				
				
				std::cout << "\nDados atualizados: " << funcionario->getNome() << ", R$: " << funcionario->getSalarioComAumento() << "\n\n";
				system("pause");
				break;
			}
			
			case 5:{
				system("cls");
				std::cout << "5 - calcular media de um aluno" << "\n";
				
				Aluno *aluno = new Aluno();
				double notas[3];
				int c;
				int arrayNotas = sizeof notas / sizeof notas[0];
				std::string nome;
				
				std::cout << "Nome do Aluno: "; 
				std::cin >> nome;
				while ((c = getchar()) != '\n' && c != EOF) { }
				
				std::cout << "Digite as tres notas do aluno: \n";				
				for(int i = 0; i < arrayNotas; i++){
					std::cin >> notas[i];
				}
				
				aluno->getNotas(notas);
				
				std::cout << "NOTA FINAL = " << aluno->notaFinal() << "\n";
				aluno->resultadoFinal();
				
				system("pause");
				break;
			}
				
			default:
				std::cout << "numero Invalido" << "\n";
				break;
		}
	}
	
	return 0;
}
























