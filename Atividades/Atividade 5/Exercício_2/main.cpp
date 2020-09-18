#include "Data.h"


int main(){
	/*Repare que para cada objeto que estamo estanciando, a mensagem ao seu respectivo construtor
	 * irá aparecer.*/
	Data dataConstrutorSemParametro;
	Data dataConstrutorComParametro(01/02/2019);
	Data dataConstrutorCopia(dataConstrutorSemParametro);
	
	return 0;

}

