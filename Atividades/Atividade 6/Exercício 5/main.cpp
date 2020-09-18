// main.cpp -- use a derived class
// compile with aritharr.cpp and arraydb.cpp
#include <iostream>
#include <cstdlib>              // exit() prototype
#include "ArithArr.h"

using namespace std;


int main(void)
{
	const int n = 4;
	double teste[n] = { 9.95, 28.55, 8.99, 1.50 };

	ArrayDb aDb1(2, 500), aDb2(5, 4.9), aDb3(aDb2), aDb4(4, 5.0);
	ArithArr aAr1(teste, n);
	ArithArr aAr2;
	ArithArr aAr3(aDb1);
	aAr1.print();
}
