// arraydb.h -- define array class
#ifndef _ARRAYDB_H_
#define _ARRAYDB_H_

#include <iostream>
using namespace std;


class ArrayDb{
	private:
		unsigned int size;			// number of array elements
	protected:
		double * arr;                       // address of first element
	public:
		ArrayDb();                          // default constructor
		// create an ArrayDb of n elements, set each to val
		ArrayDb(unsigned int n, double val = 0.0);
		// create an ArrayDb of n elements, initialize to array pn
		ArrayDb(const double * pn, unsigned int n);
		ArrayDb(const ArrayDb & a);         // copy constructor
		~ArrayDb();                         // destructor
		int arsize() const;   // returns array size
};

#endif
