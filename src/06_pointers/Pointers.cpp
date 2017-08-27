/*
 * Pointers.cpp
 *
 *  Created on: Aug 10, 2017
 *      Author: alx
 */

#include "Pointers.h"

Pointers::Pointers() {
	// TODO Auto-generated constructor stub

}

Pointers::~Pointers() {
	// TODO Auto-generated destructor stub
}

/*
 * 3. Write a program to print the value of the address of the pointer to a variable whose value is input from user.
 */
void Pointers::pointerReferences() {
	char c;			// char var
	char *p;		// declare p, pointer to char
	p = &c;			// now p points to c
	cout << "Enter a char" << endl;
	cin >> c;
	cout << "Your char has been stored in the var c, which is pointed by a pointer p." << endl;
	cout << "The var c contains value " << c << " [c] and has address " << &c << " [&c]" << endl;
	cout << "The pointer p contains the address " << p << " [p] and points to the value " << *p << " [*p]" << endl;
	cout << "Furthermore,the pointer p has an address of his own " << &p << " [&p] and the value of his address is " << *&p << " [*&p]" << endl;
}

/*
 * 5. Write a which will take pointer and display the number on screen. Take number from user and print it on screen using that function.
 */
void Pointers::printWithPointer(int *numberToPrint) {
	cout << *numberToPrint;
}

/*
 * 5.1 Same as 5 but using reference instead of pointer
 */
void Pointers::printWithReference(int &numberToPrint) {
	cout << numberToPrint;
}

/*
 * 6. Write a program to find out the greatest and the smallest among three numbers using pointers.
 */
void Pointers::maxFinder(int *a, int *b, int *c) {
	int max = *a;
	if (*b > *a || *c > *a) {
		if (*c > *b) max = *c;
		else max = *b;
	}
	cout << "Max is " << max;
}

/*
 * 7. Write a program to swap two variables using pointers.
 */
void Pointers::swapWithPointers(float *a, float *b) {
	float tmp;
	cout << "Swapping vars using pointers..." << endl;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
