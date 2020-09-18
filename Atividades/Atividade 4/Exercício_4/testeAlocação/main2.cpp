#include <iostream>
#include "Pessoa.h"

using namespace std;

int main() {

    cout << endl << "*******************************************************************" << endl;
    cout << "Criando um vetor de ponteiros para objetos, alocado estaticamente" << endl;
    cout << "*******************************************************************" << endl << endl;
    Pessoa *p[3];
    for (int i = 0; i < 3; i++) 
        p[i] = NULL;

    cout << "Vetor criado. Agora serão criados os objetos." << endl;

    for (int i = 0; i < 3; i++)
        p[i] = new Pessoa;

    cout << "Objetos criados. Agora os objetos serão eliminados" << endl;
    for (int i = 0; i < 3; i++) 
        if (p[i] != NULL) 
        {
            delete p[i];
            p[i] = NULL;
        }

    cout << endl << "*******************************************************************" << endl;
    cout << "Criando outro vetor de ponteiros para objetos, com o vetor alocado dinamicamente" << endl;
    cout << "*******************************************************************" << endl << endl;

    Pessoa **p2;
    p2 = new Pessoa*[3];
    for (int i = 0; i < 3; i++) 
        p2[i] = NULL;

   for (int i = 0; i < 3; i++)
        p2[i] = new Pessoa;

    cout << "Objetos criados. Agora os objetos serão eliminados" << endl;
    for (int i = 0; i < 3; i++) 
        if (p2[i] != NULL) 
        {
            delete p2[i];
            p2[i] = NULL;
        }

}
