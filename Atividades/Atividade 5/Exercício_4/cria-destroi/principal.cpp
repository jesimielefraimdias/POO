#include <iostream>
#include "CreateAndDestroy.h"
using namespace std;


void create();	

//Criado/Destru�do: 1/7
CreateAndDestroy first(1);  // objeto global


int main()
{
	cout << "   (global created before main)" << endl;
	cout << "Entrei no main" << endl;
	
	//Criado/Destru�do: 2/4
	CreateAndDestroy second( 2 );        // objeto local automatico
	cout << "   (local automatic in main)" << endl;
	
	//Terceiro a ser criado e pen�ltimo a ser destru�do.

	//Criado/Destru�do: 3/6
	static CreateAndDestroy third(3);  // objeto local est�tico
	cout << "   (local static in main)" << endl;

	cout << "Vou chamar a funcao create" << endl;

	create();

	cout << "Voltei da funcao create" << endl;
	
	//Criado/Destru�do: 7/3
	CreateAndDestroy fourth( 4 );        // objeto local automatico
	cout << "   (local automatic in main)" << endl;
}



void create()
{
	cout << "Entrei na funcao create" << endl;
	//Criado/Destru�do: 4/2
	CreateAndDestroy fifth( 5 );
	cout << "   (local automatic in create)" << endl;
	
	//Criado/Destru�do: 5/5
	static CreateAndDestroy sixth( 6 );
	cout << "   (local static in create)" << endl;
	
	//Sexto a ser criado e segundo a ser destru�do.
	//Criado/Destru�do: 6/1
	CreateAndDestroy seventh( 7 );
	cout << "   (local automatic in create)" << endl;
	cout << "Vou sair da funcao create" << endl;
	
}
