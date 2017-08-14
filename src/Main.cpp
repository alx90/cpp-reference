/*
 * Main.cpp
 *
 *  Created on: Aug 9, 2017
 *      Author: alx
 */

#include "00_intro/Hello.h"
#include "01_lets_start/LetsStart.h"
#include "02_variables/Variables.h"
#include "03_operators/Operators.h"
#include "04_conditionals/Conditionals.h"
#include "05_loops/Loops.h"
#include "06_pointers/Pointers.h"
#include "07_array/Arrays.h"
#include "08_strings/Strings.h"
#include "09_macros/Macros.h"

int main() {
//	Hello hello;
//	hello.sayHello();

//	LetsStart letsStart;
//	letsStart.one();
//	letsStart.two();
//	letsStart.three();
//	letsStart.five();

//	Variables variables;
//	variables.printSumAndProduct();
//	variables.printDifferentVars();
//	variables.asciiValueOfChars();
//	variables.sumWithCast();

//	Operators operators;
//	operators.assignmentOperators();
//	operators.swapVars();

//	Conditionals conditionals;
//	conditionals.benefitCalculator();
//	conditionals.schoolGradeCalculator();

//	Loops loops;
//	loops.printPattern();
//	loops.factorialCalculator();
//	loops.averageAndProductCalculator();
//	loops.infiniteLoop();

//	Pointers pointers;
	// 1
//	pointers.pointerReferences();
	// 2
//	int i = 190;
//	pointers.printWithPointer(&i);
	// 3
//	int a=1000,b=78,c=3;
//	pointers.maxFinder(&a, &b, &c);
	// 4
//	float a=1.5, b=3.7;
//	cout << "Var a has value " << a << " and address " << &a << endl;
//	cout << "Var b has value " << b << " and address " << &b << endl;
//	pointers.swapWithPointers(&a, &b);
//	cout << "Var a has value " << a << " and address " << &a << endl;
//	cout << "Var b has value " << b << " and address " << &b << endl;

	Arrays arrays;
	// 1
//	arrays.checkNumberInArray();
	// 2
//	int size;
//	cout << "Enter a size for your int array" << endl;
//	cin >> size;
//	int array[size];
//	for (int i=0; i<size; i++) {
//		cout << "Enter int number " << i+1 << endl;
//		cin >> array[i];
//	}
//	cout << "Array before modification" << endl;
//	for (int k=0; k<size; k++) {
//		cout << array[k] << " ";
//	}
//	arrays.modifyArrayByReference(array, size);
//	cout << "Array after modification" << endl;
//	for (int k=0; k<size; k++) {
//		cout << array[k] << " ";
//	}
	arrays.allocateArrayDynamically();

	Strings strings;
//	strings.printStringVertically();
//	strings.printStringVerticallyDynamicAllocation();
//	strings.copyStrings();
//	strings.compareStrings();

	// Macros
//	cout << average(2,5);
//	cout << module(-859.58);
//	cout << simpleInterest(5000,7,3600);

	return 0;
}
