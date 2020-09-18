#include "Vetor.h"
using std::cout;
using std::endl;

Vetor::~Vetor(){
		delete []vetor;//Desaloca o vetor.
}

//Aloca um vetor ao atributo ponteiro vetor.
Vetor::Vetor(int tamMax):tamanhoVetor(tamMax){
		vetor = new int[tamanhoVetor];
		indice = 0;
}

//Construtor usa os parâmetros para preencher até um tamanho do vetor com um dado valor.
Vetor::Vetor(int elemento, int nRepeticoes, int tamMax):tamanhoVetor(tamMax){
		vetor = new int[tamanhoVetor];
		preencher(elemento, nRepeticoes);
}

//Método que insere um elemento no próximo índice livre do vetor.
bool Vetor::inserir(int elemento){
		//Retorna falso em caso do vetor estar cheio ou do elemento for -1, pois se 
		//aceitar esse valor teremos um bug no método recuperar elemento que usa o -1 
		//como valor de erro.
		if(indice == tamanhoVetor || elemento == -1) return false;
		
		vetor[indice] = elemento;
		indice+=1;
		
		return true;
}

bool Vetor::remover(int elemento){
		int i;
		bool aux = false;
		
		//Procuramos o elemento a ser removido e se acharmos a variável auxiliar fica true.
		for(i = 0; i < indice; i++) {
			if(vetor[i] == elemento){
				 aux = true;
				 break;
			}
		}	
		
		//Retornamos falso em caso de não ter o elemento.
		if(aux == false) return false;
		
		//Como o elemento foi encontrado temos de reorganizar o vetor.
		for(; i < indice - 1; i++) {
			vetor[i] = vetor[i+1];
		}	
		
		//Como o valor foi encontrado e removido decrementamos o indice do vetor e retornamos true.
		indice--;
		return true;
}

int Vetor::recuperarElemento(int posicao){
		//Se a posição do índice é inválida retornamos -1.
		//Observe que os outros métodos garantem que o índice nunca será maior do que o tamanho do vetor, 
		//ou seja, não ocorrerá um acesso inválido da memória.
		if(posicao >= indice) return -1;
		//Retornamos o elemento.
		return vetor[posicao];	
}

void Vetor::preencher(int elemento, int nRepeticoes){
		//Verificamos se a quantidade de repetições do vetor é incompátivel com o tamanho do mesmo.
		//Se for, passamos o valor do máximo de elementos permitidos no vetor.
		if(nRepeticoes > tamanhoVetor) nRepeticoes = tamanhoVetor;
		
		//Preenchemos o vetor com a quantidade passada como parâmetro pelo usuário.
		for(indice = 0; indice < nRepeticoes;) inserir(elemento);
		
}

void Vetor::imprimir(){
		//Imprimimos todos os elementos do vetor.
		for(int i = 0; i < indice; i++){
			if(i%10 == 0) cout<<endl; //A cada dez elementos damos uma quebra de linha.
			
			cout<<vetor[i]<<" ";
		}
		cout<<endl;//Ao final da impressão dos elementos do vetor damos outra quebra de linha.
}
