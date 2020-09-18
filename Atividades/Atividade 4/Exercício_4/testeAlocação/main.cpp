#include <iostream>
#include "Pessoa.h"

using namespace std;

int main() {

  cout << "Criando um vetor de objetos " << endl;
  Pessoa *p = new Pessoa[3];
  Pessoa *d = new Pessoa;

  cout << "Vetor criado. Agora vou eliminar o vetor" << endl;
  delete[] p; //O vetor inteiro sera deletado
  delete d;
  
  cout << endl << endl << "Criando outro vetor de objetos " << endl;
  p = new Pessoa[3];
  cout << "Tentativa incorreta de eliminar o vetor" << endl;
  delete p; // -> Errado
}
