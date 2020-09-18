#include "Data.h"
#include <iomanip>
#include <ctime>

using std::setw;
using std::to_string;
using std::cout;
using std::endl;


//Construtor de cópia, foi necessário criar para usar no vetor.
Data::Data(const Data &copia){
	dia = copia.dia;
	mes = copia.mes;
	ano = copia.ano;
	cout<<"Construtor de cópia chamado"<<endl;
}

//Neste método, o construtor estará inicializando o 
//objeto com a data atual do sistema.
Data::Data(){
	
	struct tm agora_data = {0};
    time_t tempo_data;

    time(&tempo_data);
    agora_data = *localtime(&tempo_data);
    
	dia = agora_data.tm_mday;
	mes = agora_data.tm_mon+1;
	ano = agora_data.tm_year+1900;
	cout<<"Construtor sem parâmetros chamado"<<endl;
}

//Construtor com as datas passadas como parametro.
Data::Data(int d, int m, int a):dia(d),mes(m),ano(a){
	cout<<"Construtor com parâmetros chamado"<<endl;
}


//Para atualizar o dia com parâmetro ou com o dia local da sua máquina.
void Data::atualizaDia(int d){ dia = d; }
void Data::atualizaDia(){
	struct tm agora_data = {0};
    time_t tempo_data;
    time(&tempo_data);
    agora_data = *localtime(&tempo_data);
	dia = agora_data.tm_mday;
}

//Para atualizar o mês com parâmetro ou com o mês local da sua máquina.
void Data::atualizaMes(int m){ mes = m; }
void Data::atualizaMes(){	
	struct tm agora_data = {0};
    time_t tempo_data;
    time(&tempo_data);
    agora_data = *localtime(&tempo_data);
	mes = agora_data.tm_mon+1;
}

//Para atualizar o ano com parâmetro ou com o ano local da sua máquina.
void Data::atualizaAno(int a){ ano = a; }
void Data::atualizaAno(){
	struct tm agora_data = {0};
    time_t tempo_data;
    time(&tempo_data);
    agora_data = *localtime(&tempo_data);
	ano = agora_data.tm_year+1900;
}


//Sobrecarreguei o operador de == para poder comparar os objetos no .cpp
bool Data::operator==(Data & d){
		if(dia == d.dia && mes == d.mes && ano == d.ano) return true;
		
		return false; 
}

//Sobrecarreguei o operador para poder usar no main.cpp e no Vetor.cpp
ostream & operator<< (ostream & o, const Data & d) {
	string _dia = to_string(d.dia);
	string _mes = to_string(d.mes);
	string _ano = to_string(d.ano);
	
	if(d.dia < 10) _dia = "0"+_dia;
	if(d.mes < 10) _mes = "0"+_mes;
		
	o<<_dia<<"/"<<_mes<<"/"<<_ano;
	return o;
}


//Sobrecarreguei o operador para poder usar no main.cpp e no Vetor.cpp
istream & operator>> (istream & i, Data & d) {
	i >> setw(2) >> d.dia;
	i.ignore();
	i >> setw(2) >> d.mes;
	i.ignore();
	i >> setw(4) >> d.ano;
	
	return i;
}

//Método para retornar o mês.
string Data::getMes(){
		
		switch(mes){
			case 1: return "Janeiro"; break;
			case 2:	return "Fevereiro"; break;
			case 3: return "Março"; break;
			case 4: return "Abril"; break;
			case 5: return "Maio"; break;
			case 6: return "Junho"; break;
			case 7: return "Julho"; break;
			case 8: return "Agosto"; break;
			case 9: return "Setembro"; break;
			case 10: return "Outubro"; break;
			case 11: return "Novembro"; break;
			case 12: return "Dezembro"; break;
			
			default: return "erro";
		}
}

