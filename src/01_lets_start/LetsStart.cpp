/*
 * LetsStart.cpp
 *
 *  Created on: Aug 9, 2017
 *      Author: alx
 */

#include "LetsStart.h"

LetsStart::LetsStart() {
	// TODO Auto-generated constructor stub

}

LetsStart::~LetsStart() {
	// TODO Auto-generated destructor stub
}

/*
 * 1. Write a C++ program to print
 * *
 * **
 * ***
 * ****
 * on screen.
 */
void LetsStart::one() {
	cout << "*\n";
	cout << "**\n";
	cout << "***\n";
	cout << "****\n";
	cout << endl;
}

/*
 * 2. Store an integer in a variable x and print it on the screen.
 */
void LetsStart::two() {
	int x = 10;
	cout << x;
	cout << endl;
}

/*
 * 3. Write a program to take the input of an int and print it on the screen.
 */
void LetsStart::three() {
	int x;
	cout << "Type an integer and press enter..." << endl;
	cin >> x;
	cout << "..you typed " << x << endl;
	cout << endl;
}

/*
 * 5. Write a program to print Hello and CodesDope in two different lines.
 */
void LetsStart::five() {
	cout << "Hello" << endl;
	cout << "CodesDope " << endl;
	cout << endl;
}
