#include "Conta.h"
#include "Mensagem.h"
#include "Contato.h"
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::cin;
using std::endl;

Conta::Conta(string n, string l){
    nome = n;
    login = l;
    toupper(l[0]);
    senha = l;
}

Conta::Conta(string n, string l, string s){
    nome = n;
    login = l;
    senha = s;
}

Conta::~Conta(){
	for(int i = 0; i < nMensagens; i++){
		delete msg[i];
	}
}

void Conta::adicionarContato(Contato *usr){
    if(nContatos == 1000){
        cout<<"Não é mais possível adicionar contatos!"<<endl;
        return;
    }else{
        //add um contato
        contatos[nContatos] = usr;
    }
    nContatos++;
}

Contato Conta::escolherContato(int i){
        return *contatos[i];
}

void Conta::enviarMensagem(Contato usr, string a, string t){
    Mensagem *m= new Mensagem(usr, a, t);
    msg[nMensagens] = m;
    nMensagens++;
}

void Conta::imprimirMensagem(){
    for(int i = 0; msg[i] != NULL; i++){
        msg[i]->imprimir();
    }
}

void Conta::imprimirMensagem(int i){
        msg[i]->imprimir();
}
