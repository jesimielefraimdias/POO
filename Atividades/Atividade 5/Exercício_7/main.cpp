#include "ConjuntoDeInteiros.h"

int main(){
	
	ConjuntoDeInteiros A,B,C,D,E;
	
	int i;
	
	cout<<"Inserindo os elementos de 0 a 10 no conjunto A e B"<<endl;
	for(i = 0; i < 10; i ++){
		A.insereElemento(i);
		B.insereElemento(i);
	}
	cout<<"	Imprimindo o conjunto A: ";
	A.imprimeConjunto();
	
	cout<<"\nVerificando se os conjuntos A e B são iguais:"<<endl;
	if(A.igual(B)) cout<<"	São iguais"<<endl;
	
	
	cout<<"\nInserindo elementos de 10 a 20 no conjunto C."<<endl;
	for(i = 10; i < 20; i++) C.insereElemento(i);
	
	
	cout<<"\nFazendo a união dos conjuntos A e B"<<endl;
	D = A.uniaoDeConjuntoDeInteiros(C);
	cout<<"	Imprimindo a união resultante E:";
	D.imprimeConjunto();
	
	cout<<"\nInserindo os elementos pares de 0 a 10 no conjunto E"<<endl;
	for(i = 0; i < 10; i+=2) E.insereElemento(i);
	
	cout<<"\nFazendo a interseção dos conjuntos A e E"<<endl;
	D = A.intersecaoDeConjuntoDeInteiros(E);
	cout<<"	Imprimindo a interseção resultante D:";
	D.imprimeConjunto();
	
	return 0;

}
	
	
	
	
	
