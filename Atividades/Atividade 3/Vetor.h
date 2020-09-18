#include <iostream>

class Vetor{

	private:
		int static const tamanhoVetor = 100; //Uma variável constante estática que define o tamanho padrão do vetor para todos os objetos.
		int vetor[tamanhoVetor]; //Cria o vetor.
		int indice; //Variáve para gerenciar em qual indice inserimos no vetor.
	
	public:
		Vetor(int elemento = 0, int nRepeticoes = 0); //Construtor padrão com valores default.
		bool inserir(int elemento);	//Método inserir que retorna false caso o elemento não seja inserido.
		bool remover(int elemento); //Método remover que retorna false caso o elemento não foi localizado.
		int recuperarElemento(int posicao); //Método que recupera o elemento pela posição.
		void preencher(int elemento, int nRepeticoes); //Método que preenche o vetor até certo tamanho com um dado valor.
		void imprimir(); //Método que imprime o vetor.
};
