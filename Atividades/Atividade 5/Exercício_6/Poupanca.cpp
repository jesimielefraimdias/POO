#include "Poupanca.h"

//Construtor simples para iniciar os atributos da classe.
Poupanca::Poupanca(float saldo){
	saldoDaPoupanca = saldo;
}

//Calculamos o rendimento mensal e atualizamos somando o rendimento a poupança.
void Poupanca::rendimentoMensal(){
	saldoDaPoupanca+= (saldoDaPoupanca*taxaDeJurosAnual)/12;
}

//Setamos para um nova taxa anual.
void Poupanca::setTaxaDeJurosAnual(float taxa){
	taxaDeJurosAnual = taxa;
}

//Imprimimos o saldo atual.
void Poupanca::imprimirSaldo(){
	cout<<"O saldo do poupador é R$:"<<saldoDaPoupanca<<endl;
}
