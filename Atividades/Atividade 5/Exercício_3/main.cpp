#include "Vetor.h"


int main(){

	/*Como podemos ver nesse código, criamos dois objetos do tipo Data com
	 * datas diferentes, e passamos o primeiro objeto criado para o construtor
	 * do objeto Vetor e depois passamos o objeto Vetor como parâmetro para outro
	 * objeto do mesmo tipo para que use construtor de cópia, agora teremos
	 * dois objetos do tipo Vetor com o mesmo dado, porém, eu preenchi o
	 * primeiro objeto do tipo Vetor que não usou o construtor de cópia
	 * com outro objeto do tipo Data.
	 * Agora quando mandamos imprimir as datas dos objetos do tipo Vetor, vemos que
	 * o objeto do tipo Vetor que foi preenchido com outra Data está imprimindo
	 * a nova data e o que foi instanciado com o construtor de cópia está imprimindo
	 * as datas antigas que estavam no objeto que foi passado como parâmetro no seu construtor
	 * de cópia, ou seja, podemos confirmar que o que está sendo passado é o dado e não
	 * a cópia do endereço do atributo. */
	 
	Data data(3,10,1997);
	Data data2(18,3,1997);
	Vetor vet(data,5,50);
	Vetor vet1(vet);
	
	vet.preencher(data2,10);
	vet.imprimir();
	cout<<endl<<endl;
	vet1.imprimir();
	return 0;
}
