// arraydb.cpp -- ArrayDb class methods
#include <iostream>
#include <cstdlib>   // exit() prototype
#include "ArrayDb.h"

// default constructor -- no arguments
ArrayDb::ArrayDb()
{
   arr = NULL;
   size = 0;
}

// constructs array of n elements, each set to val
ArrayDb::ArrayDb(unsigned int n, double val)
{
   arr = new double[n];
   size = n;
 for (int i = 0; i < arsize(); i++) arr[i] = val;
}

// initialize ArrayDb object to a non-class array
ArrayDb::ArrayDb(const double *pn, unsigned int n)
{
   arr = new double[n];
   size = n;
 for (int i = 0; i < arsize(); i++)
       arr[i] = pn[i];
}

// initialize ArrayDb object to another ArrayDb object
ArrayDb::ArrayDb(const ArrayDb & a)
{
   size = a.size;
   arr = new double[size];
   for (int i = 0; i < arsize(); i++)
       arr[i] = a.arr[i];
}

// destructor to free memory allocated
ArrayDb::~ArrayDb()
{
   delete [] arr;
}

// returns array size
int ArrayDb::arsize() const 
{
    return size;
}
