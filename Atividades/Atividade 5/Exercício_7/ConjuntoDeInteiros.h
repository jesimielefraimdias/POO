#include <iostream>

using std::cout;
using std::endl;

class ConjuntoDeInteiros{
	private:
		static const int max = 101; //Foi definida aqui por ser uma variável estática e constante.
		bool vetor[max];			//Vetor ponteiro que indica se o número está ou não no conjunto.
	public:
		ConjuntoDeInteiros();	//Construtor para iniciar o vetor com os elementos falsos.
		
		/*Método que faz a união dos elementos de dois conjuntos e o retorna.*/
		ConjuntoDeInteiros uniaoDeConjuntoDeInteiros(ConjuntoDeInteiros conjunto);  
		/*Método que faz a interseção dos elementos de dois conjuntos e o retorna.*/
		ConjuntoDeInteiros intersecaoDeConjuntoDeInteiros(ConjuntoDeInteiros conjunto);
		bool insereElemento(int elemento); //Insere um elemento no conjunto.
		bool retiraElemento(int elemento); //Retira um elemento do conjunto.
		void imprimeConjunto();	//Imprime o conjunto.
		bool igual(const ConjuntoDeInteiros &conjunto); //Verifica se os conjuntos são iguais.
};
