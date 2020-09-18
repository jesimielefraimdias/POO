#include <iostream>
#include "Data.h"

using std::string;

class Vacina{
	private:
		Data dataVacina;
		string vacina;
		bool vacinado;
	public:
		Vacina(Data &d, string v);
		void vacinar();
		bool getVacinado();
		string getVacina();
		Data getDataVacina();
};
		
		
