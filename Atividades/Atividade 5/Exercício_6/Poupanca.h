#include <iostream>
using std::endl;
using std::cout;

class Poupanca{
	private:
		static float taxaDeJurosAnual; 				//Responsável pelo juros de todos os objetos da classe.
		float saldoDaPoupanca;		  				//Responsável pelo saldo.
	public:
		Poupanca(float saldo);					//Construtor para inicializar os atributos.
		void rendimentoMensal();					//Calcula o rendimento mensal e atualiza o saldo.
		void setTaxaDeJurosAnual(float taxa); 		//Atualiza a taxa de juros.
		void imprimirSaldo();				  		//Imprimi o saldo.
};
