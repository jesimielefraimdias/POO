#include "Data.h"


int main(){
	
	Data d1,d2(18,03,1997),d3(37,12);
	
	cout<<"Meses com as datas passadas como parâmetros e dos construtores."<<endl;
	cout<<d1.getMes()<<endl;	
	cout<<d2.getMes()<<endl;
	cout<<d3.getMes()<<endl;
	
	cout<<endl<<"Atualizando dia,mês e ano..."<<endl;
	d1.atualizaDia();
	d1.atualizaMes();
	d1.atualizaAno();
	
	d2.atualizaDia();
	d2.atualizaMes();
	d2.atualizaAno();
	
	d3.atualizaDia();
	d3.atualizaMes();
	d3.atualizaAno();
	
	cout<<endl<<"Mostrando que os meses foram atualizados com horário local"<<endl;
	cout<<d1.getMes()<<endl;	
	cout<<d2.getMes()<<endl;
	cout<<d3.getMes()<<endl;
	
	return 0;

}
