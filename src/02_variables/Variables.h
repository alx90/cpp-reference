/*
 * Variables.h
 *
 *  Created on: Aug 9, 2017
 *      Author: alx
 */

#ifndef VARIABLES_H_
#define VARIABLES_H_

#include <iostream>
using namespace std;

class Variables {
public:
	Variables();
	virtual ~Variables();
	void printSumAndProduct();
	void printDifferentVars();
	void asciiValueOfChars();
	void sumWithCast();
private:
	int sum(int a, int b);
	int product(int a, int b);
};

#endif /* VARIABLES_H_ */
