#include "Pessoa.h"

class Crianca:public Pessoa{
	private:
		static const int meses = 12;
		static const int dias = 31;
		string baba;
		Vacina *carteiraVacinacao[meses][dias];
	protected:
		int dentes;
		int brinquedos;
	public:
		Crianca(string b, Vacina *carteiraVacinacaoAnual);
		void atualizarCarteiraVacinacaoAnual(Vacina *novaCarteiraVacinacao);
		void falar();
		void correr();
		void pular();
		void crescer();
		void brincar();
		void estudar();
		void assistirDesenho();
};
	
		
		


