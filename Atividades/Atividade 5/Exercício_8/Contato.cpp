#include "Contato.h"

using std::cout;
using std::endl;

Contato::Contato(string n, string e){
    nome = n;
    email = e;
}

Contato::Contato(const Contato &contato){
	nome = contato.nome;
	email = contato.email;
}

string Contato::getEmail(){
    return email;
}

void Contato::imprimir(){
    cout<<"Nome: "<<nome<<endl;
    cout<<"E-mail: "<<email<<endl;
}

