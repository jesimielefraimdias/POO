#include "ConjuntoDeInteiros.h"

ConjuntoDeInteiros::ConjuntoDeInteiros(){
	//Iniciando todas as posições do vetor como falso.
	for(int i = 0; i < max; i++) vetor[i] = false;
}

//Faz a união dos dois conjuntos e retorna.
ConjuntoDeInteiros ConjuntoDeInteiros::uniaoDeConjuntoDeInteiros(ConjuntoDeInteiros conjunto){
		
	for(int i = 0; i < max; i++){
		if(vetor[i] == true) conjunto.vetor[i] = true;
	}
	return conjunto;
}

//Faz a interseção de dois conjuntos e retorna.
ConjuntoDeInteiros ConjuntoDeInteiros::intersecaoDeConjuntoDeInteiros(ConjuntoDeInteiros conjunto){
		
	for(int i = 0; i < max; i++){
		if(vetor[i] != true || conjunto.vetor[i] != true) conjunto.vetor[i] = false;
	}
	return conjunto;
}

//Insere o elemento no conjunto e retorna true caso o elemento tenha sido inserido.
bool ConjuntoDeInteiros::insereElemento(int elemento){
	if(elemento < 0 || elemento > 100) return false; //Verifica se o elemento está no intervalo [0,100]
	
	vetor[elemento] = true;
	return true;
}

//Insere o elemento no conjunto e retorna true caso o elemento tenha sido inserido.
bool ConjuntoDeInteiros::retiraElemento(int elemento){
	if(elemento < 0 || elemento > 100) return false; //Verifica se o elemento está no intervalo [0,100]
	
	vetor[elemento] = false;
	return true;
}

//Imprimi o conjunto.
void ConjuntoDeInteiros::imprimeConjunto(){
	cout<<"{";
	bool ultimo = false;//Variável criada com o único propósito de impediir que ocorra, por exemplo, {1,2,3,} (Uma virgula no final).
	
	for(int i = 0; i < max; i++){
		if(vetor[i] == true && ultimo == true){
			cout<<",";
			ultimo = false;
		}
		
		if(vetor[i] == true){
			cout<<i;
			ultimo = true;
		}
	}
	cout<<"}"<<endl;
}


//Verifica se os elementos de um conjunto são iguais e retorna true caso seja.
bool ConjuntoDeInteiros::igual(const ConjuntoDeInteiros &conjunto){
	for(int i = 0; i < max; i ++){
		if(vetor[i] != conjunto.vetor[i]) return false;
	}
	return true;
}
		
