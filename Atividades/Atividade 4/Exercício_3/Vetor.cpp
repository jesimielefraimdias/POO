#include "Vetor.h"

Vetor::~Vetor(){
	
	for(int i = 0; i < tamanhoVetor; i++)	delete[]vetor[i]; //Destrutor que desaloca todos as datas do vetor..
	
	delete []vetor;//Desaloca o vetor de ponteiro de datas.
}


Vetor::Vetor(int tamMax):tamanhoVetor(tamMax){
		vetor = new Data*[tamanhoVetor]; //Associa um vetor de ponteiro de datas para o atributo data ponteiro de ponteiro.
		indice = 0;
}

//Observe que nesse construtor não precisamos inicializar o indice = 0, pois o preencher
//no for irá fazer.
Vetor::Vetor(Data elemento, int nRepeticoes, int tamMax):tamanhoVetor(tamMax){
		vetor = new Data*[tamanhoVetor]; //Associa um vetor de ponteiro de datas para o atributo ponteiro de ponteiro.
		preencher(elemento, nRepeticoes); //Preenche o vetor com a data elemento e nRepeticoes.
}

//Método que insere um elemento no próximo índice livre do vetor.
bool Vetor::inserir(Data elemento){
	
		if(indice == tamanhoVetor) return false;//Verifica se o vetor não está cheio.
		
		//Aloca uma data para determinado indice do vetor.
		vetor[indice] = new Data(elemento); //Observe que estamos usando o construtor de cópia.
		indice+=1;//Incrementa.
		
		return true;//Retorna true.
}


bool Vetor::remover(Data elemento){
		int i;
		bool aux = false;
		
		//Procuramos a data a ser removido e se acharmos a variável auxiliar fica true.
		for(i = 0; i < indice; i++) {
			if(*vetor[i] == elemento){
				 delete vetor[i];
				 aux = true;
				 break;
			}
		}	
		
		//Retornamos falso em caso de não ter a data.
		if(aux == false) return false;
		
		//Como a data foi encontrado temos de reorganizar o vetor.
		for(; i < indice - 1; i++) {
			vetor[i] = vetor[i+1];
		}	
		
		//Como foi encontrado e removido decrementamos o indice do vetor e retornamos true.
		indice--;
		return true;
}

Data* Vetor::recuperarElemento(int posicao){
		//Retornamos nulo quando a posição solicita para retorno é maior do que a quantidade de datas no vetor.
		if(posicao >= indice) return NULL;
		
		//Retorna o endereço da data.
		//Observe que retornar o endereço da data é melhor, pois caso seja uma posição inválida retornamos NULL.
		return vetor[posicao];	
}

void Vetor::preencher(Data elemento, int nRepeticoes){
		//Caso as nRepeticoes sejam maior do que o tamanho do vetor fazemos nRepeticoes igual ao tamanho máximo do vetor.
		if(nRepeticoes > tamanhoVetor) nRepeticoes = tamanhoVetor;
		
		//Inserimos no vetor.
		for(indice = 0; indice < nRepeticoes;) inserir(elemento);
}

//Imprimimos todas as datas do vetor.
void Vetor::imprimir(){
		int i = 0;
		
		//O loop vai até o indice (lembre-se que o indice é uma posição acima do último elemento do vetor).
		for(i = 0; i < indice; i++){
			//Quebra de linha a cada dez elementos.
			if(i%10 == 0) cout<<endl;
			
			cout<<*vetor[i]<<" ";
		}
		cout<<endl;
}
