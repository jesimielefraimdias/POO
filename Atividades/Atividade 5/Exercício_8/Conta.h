#include <iostream>
#include "Contato.h"
#include "Mensagem.h"
using std::string;

class Conta{
    private:
        string nome;
        string login;
        string senha;
        int nContatos = 0;
        int nMensagens = 0;
        Contato *contatos[1000];
        Mensagem *msg[1000];

    public:
        Conta(string n, string l);
        Conta(string n, string l, string s);
        ~Conta();
        void adicionarContato(Contato *usr);
        Contato escolherContato(int i);
        void enviarMensagem(Contato usr, string a, string t);
        void imprimirMensagem();
        void imprimirMensagem(int i);
};
