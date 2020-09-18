#include <iostream>

class Pilha{
	private:
		const int max; //Constante para o tamanho da pilha.
		int topo;	   //Indica o topo da pilha.
		int *itens;	   //Apontará para o vetor dinâmico.
	public:
		Pilha(int m = 10); //Construtor que iniciará a constante e o tamanho do vetor.
		~Pilha();
		bool vazia();	//Retorna true caso esteja vazia.
		bool cheia();   //Retorna true caso esteja cheia.
		bool empilha(int &item); //Retorna true caso o elemento foi empilhado.
		bool desempilha(int &item); //Retorna true caso o elemento foi desempilhado.
		bool topoDaPilha(int &item); //Retorna o elemento do topo.
};
	
		
