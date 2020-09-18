#include "Data.h"
#define MAX 100

using std::cout;
using std::endl;
using std::cin;

class Vetor{

	private:
		const int tamanhoVetor; //Uma ponteiro constante para o tamanho do vetor.
		Data **vetor; //Atributo data de ponteiro de ponteiro.
		int indice; //Atributo para gerenciar onde está escrevendo no vetor.
	
	public:
		~Vetor();//Destrutor que desaloca toda memória alocada.
		Vetor(const Vetor &copia);
		Vetor(int tamMax = MAX);//Construtor que recebe recebe o tamanho do vetor ou usa o default.
		Vetor(Data elemento, int nRepeticoes,int tamMax = MAX); //Construtor que aceita três ou dois parametros e usa o default.
		bool inserir(Data elemento);	//Método inserir uma data no vetor.
		bool remover(Data elemento); //Método para remover uma data no vetor.
		Data* recuperarElemento(int posicao); //Método que recupera uma data do vetor.
		void preencher(Data elemento, int nRepeticoes); //Método que preenche o vetor até certo tamanho com uma data.
		void imprimir(); //Método que imprime o vetor de datas.
		friend ostream & operator<< (ostream & o, const Data & d); //Função friend para podermos usar os operadores sobrecarregados
																   //de datas na classe vetor.
};
