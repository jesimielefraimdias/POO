#include "Adulto.h"

class Trabalhador:public Adulto{
	private:
		float salario;
		string profissao;
		string enderecoTrabalho;
	protected:
		bool funcional;
	public:
		Trabalhador(float s, string p, string et);
		void trabalhar();
		float receberSalario();
};
