#include "Vetor.h"


/* O main foi alterado para poder usar a mesma interface para o vetor de datas, não foi alterado quase
 * pois os operadores "<<" e ">>" foram sobrecarregados. */
/* E, também, o objeto recuperado se tornou um ponteiro para poder fazer a comparação com NULL caso a posição
 * solicitada não tenha nenhuma data. */
 
int main(){
	
	//Cria Objeto
	//Vetor vet;
	//Vetor vet2(2,40);
	//Vetor vet(50);
	Data data(3,10,1997);
	Vetor vet(data,40,50);

	
	int menu = 0;
	Data elemento;
	int nRepeticoes;
	int posicao;
	Data* recuperado;
	
	while (menu != 6){
		cout << endl << "Escolha uma das opcoes abaixo:\t(Obsv: Padrão de entrada da data é XX/XX/XXXX)" << endl;
		cout << "1 - Para inserir uma data no vetor." << endl;
		cout << "2 - Para remover uma data no vetor." << endl;
		cout << "3 - Para recuperar uma data no vetor." << endl;
		cout << "4 - Para preencher o vetor com uma determinada data." << endl;
		cout << "5 - Para imprimir as datas do vetor." << endl;
		cout << "6 - Para Sair." << endl;
		cin >> menu;
		
		switch (menu) {
            case 1:{
                cout << "Digite a data que deseja inserir" << endl;
                cin>>elemento;
                if (vet.inserir(elemento)){
					cout<<"Data "<<elemento<<" inserida com sucesso!"<<endl;
                }else
                	cout << "Nao foi possivel inserir a data, verifique se o vetor nao esta cheio" << endl;
                break;
            }
            case 2:{
                cout << "Digite a data que deseja remover" << endl;
				cin>>elemento;
                if (vet.remover(elemento)){
					cout << "Data "<<elemento<< ", removida com sucesso!" << endl;
                }else
                	cout << "Nao foi possivel encontrar a data ou vetor esta vazio!" << endl;
                break;
            }
            case 3:{
                cout << "Digite a posicao da data que deseja recuperar" << endl;
                cin >> posicao;
                recuperado = vet.recuperarElemento(posicao);
                if (recuperado != NULL){
                	cout << "Data recuperada foi "<<*recuperado<< endl;
                }else
                	cout << "Nao foi possivel encontrar a data!" << endl;
                break;
            }
            case 4:{
                cout << "Digite a data com qual você deseja preencher o vetor" << endl;
                cin>>elemento;
                cout << "Quantas repeticoes dessa data voce deseja?"<< endl;
                cin >> nRepeticoes;
                vet.preencher(elemento, nRepeticoes);
                break;
            }

            case 5:{
            	cout << "Vetor de datas:" << endl;
               	vet.imprimir();
                break;
            }
            
            case 6:{
               	cout << "Bye!" << endl;
                break;
            }


            default: {
                cout << "Digite um numero valido" << endl;
                break;
            }
        }// fim switch
	}

	return 0;
}
