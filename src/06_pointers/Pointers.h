/*
 * Pointers.h
 *
 *  Created on: Aug 10, 2017
 *      Author: alx
 */

#ifndef SRC_06_POINTERS_POINTERS_H_
#define SRC_06_POINTERS_POINTERS_H_

#include <iostream>

using namespace std;

class Pointers {
public:
	Pointers();
	virtual ~Pointers();

	void pointerReferences();
	void printWithPointer(int *numberToPrint);
	void printWithReference(int &numberToPrint);
	void maxFinder(int *a, int *b, int *c);
	void swapWithPointers(float *a, float *b);
};

#endif /* SRC_06_POINTERS_POINTERS_H_ */
