#include "Pilha.h"

using std::cout;
using std::cin;
using std::endl;

int main(){
	//Declaramos um pilha de tamanho 10.
	Pilha pilha(10);
	int i = 0;
	
	//Empilhamos até a mesma estar cheia.
	while(!pilha.cheia()){
		pilha.empilha(i);
		i++;
	}
	
	//Vemos o elemento do topo da pilha.
	pilha.topoDaPilha(i);
	cout<<i<<endl<<endl;
	
	//Desempilhamos até a pilha estar vazia.
	while(!pilha.vazia()){
		pilha.desempilha(i);
		cout<<i<<endl;
	}

	return 0;
}
