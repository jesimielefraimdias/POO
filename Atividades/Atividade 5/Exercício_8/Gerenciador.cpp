#include <iostream>
#include "Gerenciador.h"

using std::cout;
using std::cin;
using std::endl;

void Gerenciador::criarConta(string n, string l, string s){
    if(nContas == 1000){
        cout<<"Erro! Limite de contas atingido"<< endl;
        return; 
    }else{
        contas[nContas] = new Conta(n, l, s);
    }
    
    nContas++;
}

Gerenciador::~Gerenciador(){
	for(int i = 0; i < nContas; i++) delete contas[i];
}
