#include "Mensagem.h"
#include "Contato.h"
using std::string;
using std::cout;
using std::endl;

Mensagem::Mensagem(Contato usuario,string subject, string body):user(usuario){
	
    assunto = subject;
    corpo = body;
}

void Mensagem::setCorpo(string body){
        corpo = body;
}

void Mensagem::imprimir(){
    user.imprimir();
    cout<<"Assunto: "<<assunto<<endl;
    cout<<"Mensagem: "<<corpo<<endl;
}
