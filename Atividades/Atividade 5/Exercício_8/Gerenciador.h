#include <iostream>
#include "Conta.h"
using std::string;

class Gerenciador{
    private:
        int nContas = 0;
        Conta *contas[1000];
    public:
        void criarConta(string n, string l, string s);
        ~Gerenciador();
};
