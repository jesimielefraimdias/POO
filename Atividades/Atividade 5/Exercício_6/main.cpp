#include "Poupanca.h"

int main(){
	//Declaramos os objetos com seu saldo atual.
	Poupanca poupador1(2000),poupador2(3000);
	//Setamos apenas um juros, pois o atributo do mesmo é estático.
	poupador1.setTaxaDeJurosAnual(0.06);
	//Calculamos os rendimentos mensais dos dois objetos.
	poupador1.rendimentoMensal();
	poupador2.rendimentoMensal();
	
	//Imprimimos os saldos.
	cout<<"Poupador1:"<<endl;
	poupador1.imprimirSaldo();
	cout<<"Poupador2:"<<endl;
	poupador2.imprimirSaldo();
	
	//Setamos a nova taxa de juros.
	poupador2.setTaxaDeJurosAnual(0.08);
	
	//Calculamos os rendimentos mensais dos dois objetos.
	poupador1.rendimentoMensal();
	poupador2.rendimentoMensal();
	
	//Imprimimos os saldos:
	cout<<"Poupador1:"<<endl;
	poupador1.imprimirSaldo();
	cout<<"Poupador2"<<endl;
	poupador2.imprimirSaldo();
	
	return 0;
}
