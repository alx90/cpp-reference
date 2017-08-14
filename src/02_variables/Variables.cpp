/*
 * Variables.cpp
 *
 *  Created on: Aug 9, 2017
 *      Author: alx
 */

#include "Variables.h"

Variables::Variables() {
	// TODO Auto-generated constructor stub
}

Variables::~Variables() {
	// TODO Auto-generated destructor stub
}

// example of private functions
int Variables::sum(int a, int b) {
	return a + b;
}
int Variables::product(int a, int b) {
	return a * b;
}

/*
 * 3. Write a C++ program to take two integer inputs from user and print sum and product of them.
 */
void Variables::printSumAndProduct() {
	int a, b;

	cout << "This program will calculate sum and product of 2 integers\n";

	cout << "Input the first integer and press enter\n";
	cin >> a;
	cout << "Input the second integer and press enter\n";
	cin >> b;

	cout << "The sum is " << sum(a, b) << endl;
	cout << "The product is " << product(a, b) << endl;

	cout << endl;
}

/*
 * 6. Write a C++ program to print an int, a double and a char on screen.
 */
void Variables::printDifferentVars() {
	int i;
	double d;
	char c;
	cout << "Input an integer, a double and a char" << endl;
	cin >> i;
	cin >> d;
	cin >> c;
	cout << "integer is " << i << ", double is " << d << " char is " << c << endl;
	cout << endl;
}

/*
 * 9. Write a program to add 3 to the ASCII value of the character 'd' and print the equivalent character.
 */
void Variables::asciiValueOfChars() {
	char x = 'd'+3;
	cout << x << endl;
	cout << endl;
}

/*
 * 10. Write a program to add an integer variable having value 5 and a double variable having value 6.2.
 */
void Variables::sumWithCast() {
	int x = 5 + (int)6.2;
	cout << x << endl;
}
