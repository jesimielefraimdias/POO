#include <iostream>

using std::string;
using std::ostream;
using std::istream;

class Data{
	private:
		int dia;
		int mes;
		int ano;
	public:
	
		Data(const Data &copia);
		Data();
		Data(int d, int m = 1, int a = 2000);
		
		string getMes();//Retorna o nome do mês em uma string.
		//Atualizam com a data passada como parâmetro.
		void atualizaDia(int d);
		void atualizaMes(int m);
		void atualizaAno(int a);
		
		
		//Atualizam com a data local.
		void atualizaDia();
		void atualizaMes();
		void atualizaAno();
		
		//Operadores sobrecarregados para serem usados no main.cpp e no Vetor.cpp.
		bool operator==(Data & d);
		friend ostream & operator<< (ostream & o, const Data & d);
		friend istream & operator>> (istream & i, Data & d);
	
};
