#include "Pessoa.h"

class Adulto:public Pessoa{
	private:
		string RG;
		string CPF;
		string CNH;
	protected:
		int filhos;
	public:
		Adulto(string rg,string cpf,string cnh);
		void falar();
		void trabalhar();
		void pagarImposto();
		void dirigir();
		void casar();
};
