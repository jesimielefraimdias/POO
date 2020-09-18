#include "Data.h"

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
}

//Construtor com as datas passadas como parametro.
Data::Data(int d, int m, int a):dia(d),mes(m),ano(a){}


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


//Método para retornar o nome do mês em uma string.
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
	

