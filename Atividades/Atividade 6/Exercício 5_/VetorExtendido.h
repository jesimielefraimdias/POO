#include "Vetor.h"

class VetorExtendido: public Vetor{
	public:
		int primeiroElemento();
		int ultimoElemento();
		int somaDosElementos();
		int mediaDosElementos();
		bool verificarElemento(int elemento);
};
		
