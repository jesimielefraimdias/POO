#include <iostream>
using std::string;

class Contato{

    private:
        string email;
        string nome;

    public:
		Contato(const Contato &contato);
        Contato(string n, string e);
        string getEmail();
        void imprimir();
};
