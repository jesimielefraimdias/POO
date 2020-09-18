#include "ArithArr.h"
#include <iostream>

using std::cout;
using std::endl;

ArithArr::ArithArr(double *vetor, int n):ArrayDb(vetor,n){}
ArithArr::ArithArr():ArrayDb(){}
ArithArr::ArithArr(const ArrayDb &c):ArrayDb(c){}

int ArithArr::sum(){
	int acumulador = 0;
	for(int i = 0; i < arsize(); i++) acumulador += arr[i];
	
	return acumulador;
}

int ArithArr::average() { return sum()/arsize();}

void ArithArr::print() { 
	for(int i = 0; i < arsize(); i++) {
		if(i % 10 == 0) cout<<endl;
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
	
	
