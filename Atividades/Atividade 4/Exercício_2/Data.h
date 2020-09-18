#include<iostream>
#include <ctime>

using std::string;

class Data {
	private:
		int dia;
		int mes;
		int ano;
	public:
	
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
	
};
