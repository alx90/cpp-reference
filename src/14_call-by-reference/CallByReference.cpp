/*
 * CallByReference.cpp
 *
 *  Created on: Aug 27, 2017
 *      Author: alx
 */

#include "CallByReference.h"

CallByReference::CallByReference() {
	// TODO Auto-generated constructor stub

}

CallByReference::~CallByReference() {
	// TODO Auto-generated destructor stub
}

/*
 * 1. Example of call by reference using pointers
 */
void CallByReference::swapWithPointers( int *a, int *b ) {
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

/*
 * 2. Example of call by reference using references
 */
void CallByReference::swapWithReferences( int &a, int &b ) {
	int t;
	t = a;
	a = b;
	b = t;
}
