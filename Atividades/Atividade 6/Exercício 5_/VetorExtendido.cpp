#include "VetorExtendido.h"

int VetorExtendido::primeiroElemento(){
	if(indice == 0) return -1;
	
	return vetor[0];
}

int VetorExtendido::ultimoElemento(){
	if(indice == 0) return -1;
	
	return vetor[indice];
}

int VetorExtendido::somaDosElementos(){
	int acumulador = 0;
	for(int i = 0; i < indice; i++) acumulador += vetor[i];
	
	return acumulador;
}

int VetorExtendido::mediaDosElementos(){
	return somaDosElementos()/indice;
}

bool VetorExtendido::verificarElemento(int elemento){
	for(int i = 0; i < indice; i++) if(vetor[i] == elemento) return true;
	
	return false;
}
