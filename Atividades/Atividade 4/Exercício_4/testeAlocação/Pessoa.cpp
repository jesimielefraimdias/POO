#include "Pessoa.h"
#include <iostream>

using namespace std;

Pessoa::Pessoa() {
    cout << "Entre com o nome de uma pessoa: ";
    cin >> nome; 
    cout << "O objeto " << nome << " esta sendo criado." << endl;
}

Pessoa::~Pessoa() {
    cout << "O objeto " << nome << " esta sendo destruido." << endl;
}
