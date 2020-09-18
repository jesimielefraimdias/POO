#include <iostream>
#include "Contato.h"
using std::string;

class Mensagem{
    private:
        Contato user;
        string assunto;
        string corpo;
    public:
        Mensagem(Contato usuario,string subject = "", string body = "");
        void enviar();
        void setCorpo(string body);
        void imprimir();
};
