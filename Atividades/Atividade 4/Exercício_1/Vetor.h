#include <iostream>
#define MAX 100 //define para usar no default.

class Vetor{

	private:
		const int tamanhoVetor; //Uma variável constante que define o tamanho padrão do vetor.
		int *vetor; //Ponteiro do tipo int para apontar para o vetor.
		int indice; //Variáve para gerenciar em qual indice inserimos no vetor.
	
	public:
		~Vetor(); //Destrutor para desalocar o vetor.
		Vetor(int tamMax = MAX); //Construtor que aceita um ou nenhum parametro para o tamanho do vetor.
		Vetor(int elemento, int nRepeticoes,int tamMax = MAX); //Construtor padrão com valores default.
		bool inserir(int elemento);	//Método inserir que retorna false caso o elemento não seja inserido.
		bool remover(int elemento); //Método remover que retorna false caso o elemento não foi localizado.
		int recuperarElemento(int posicao); //Método que recupera o elemento pela posição.
		void preencher(int elemento, int nRepeticoes); //Método que preenche o vetor até certo tamanho com um dado valor.
		void imprimir(); //Método que imprime o vetor.
};
