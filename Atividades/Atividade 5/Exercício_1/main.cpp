#include "Data.h"
using std::cout;
using std::endl;

void porPonteiro(Data *data);
void porReferencia(Data &data);
void porValor(Data data);

int main(){
	
	Data data(01/02/2019);
	Data data1(01/02/2019);
	Data data2(01/02/2019);
	
	/*Repare que o atributo mes foi alterado apenas nos objetos data e data1
	 * enquanto no objeto data2 permaneceu inalterado, pois ele está passando
	 * uma cópia do seu dado para a função. */
	 
	porPonteiro(&data);
	cout<<data.getMes()<<endl;
	porReferencia(data1);
	cout<<data1.getMes()<<endl;
	porValor(data2);
	cout<<data2.getMes()<<endl;
	
	return 0;

}


void porPonteiro(Data *data){
	data->atualizaDia();
	data->atualizaMes();
	data->atualizaAno();
	
}
void porReferencia(Data &data){
	data.atualizaDia();
	data.atualizaMes();
	data.atualizaAno();
}

void porValor(Data data){
	data.atualizaDia();
	data.atualizaMes();
	data.atualizaAno();
}
