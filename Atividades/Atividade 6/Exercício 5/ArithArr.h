#include "ArrayDb.h"

class ArithArr:public ArrayDb{
	public:
		ArithArr(double *vetor, int n);
		ArithArr();
		ArithArr(const ArrayDb &c);
		int sum();
		int average();
		void print();
	
};
