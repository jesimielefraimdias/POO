#include "Trabalhador.h"

class Medico:public Trabalhador{
	private:
		string CRM;
		string especialidade;
	public:
		Medico(string crm, string especialidade);
		void atenderPaciente(string paciente);
		void curar();
		void receitarRemedio(string doenca);
		void operar();
};
