#include <iostream>
#include "CreateAndDestroy.h"
using namespace std;


void create();	

//Criado/Destruído: 1/7
CreateAndDestroy first(1);  // objeto global


int main()
{
	cout << "   (global created before main)" << endl;
	cout << "Entrei no main" << endl;
	
	//Criado/Destruído: 2/4
	CreateAndDestroy second( 2 );        // objeto local automatico
	cout << "   (local automatic in main)" << endl;
	
	//Terceiro a ser criado e penúltimo a ser destruído.

	//Criado/Destruído: 3/6
	static CreateAndDestroy third(3);  // objeto local estático
	cout << "   (local static in main)" << endl;

	cout << "Vou chamar a funcao create" << endl;

	create();

	cout << "Voltei da funcao create" << endl;
	
	//Criado/Destruído: 7/3
	CreateAndDestroy fourth( 4 );        // objeto local automatico
	cout << "   (local automatic in main)" << endl;
}



void create()
{
	cout << "Entrei na funcao create" << endl;
	//Criado/Destruído: 4/2
	CreateAndDestroy fifth( 5 );
	cout << "   (local automatic in create)" << endl;
	
	//Criado/Destruído: 5/5
	static CreateAndDestroy sixth( 6 );
	cout << "   (local static in create)" << endl;
	
	//Sexto a ser criado e segundo a ser destruído.
	//Criado/Destruído: 6/1
	CreateAndDestroy seventh( 7 );
	cout << "   (local automatic in create)" << endl;
	cout << "Vou sair da funcao create" << endl;
	
}
