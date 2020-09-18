#include "Pilha.h"

//Construtor que passa o parametro para o atributo max, inicializa o topo e aloca memória para o ponteiro itens.
Pilha::Pilha(int m):max(m){
	topo = -1;
	itens = new int[max];
}

//Desalocamos a memória do vetor.
Pilha::~Pilha(){
	delete []itens;
}

//Verificamos se a pilha está vazia através do atributo topo.
bool Pilha::vazia(){
	if(topo == -1) return true;
	return false;
}

//Verificamos se a pilha stá cheia através do atributo topo e max.
bool Pilha::cheia(){
	if(topo == max-1) return true;
	return false;
}

//Recebemos um elemento por parametro e colocamos no topo da pilha.
bool Pilha::empilha(int &item){
	if(cheia()) return false;
	topo++;
	itens[topo] = item;
	return true;
}

//Retiramos o elemento no topo da pilha.
bool Pilha::desempilha(int &item){
	if(vazia()) return false;
	item = itens[topo];
	topo--;
	return true;
}

//Vemos o elemento que está no topo da pilha.
bool Pilha::topoDaPilha(int &item){
	if(vazia()) return false;
	item = itens[topo];
	return true;
}
