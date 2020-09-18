#include <iostream>
#include "Vacina.h"

class Pessoa {
	private:
		Data dataNacimento;
		int idade;
		char sexo;
		float peso;
		float altura;
	public:
		Pessoa(char s, float p, float a);
		void comer();
		void beber();
		void dormir();
		void seLocomover();
		void pensar();
		void sentir();
		void envelhecer();
};
		
