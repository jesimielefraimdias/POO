#include <iostream>
#include "CreateAndDestroy.h"

using namespace std;

CreateAndDestroy::CreateAndDestroy(int value)  // constructor
{
	data = value;
	cout << "Entrei no construtor do Objeto " << data << "    ";

}
CreateAndDestroy::~CreateAndDestroy()      // destructor
{
	cout << "Entrei no destrutor do Objeto " << data << "    " << endl;
}
