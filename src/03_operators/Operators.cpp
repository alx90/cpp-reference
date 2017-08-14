/*
 * Operators.cpp
 *
 *  Created on: Aug 9, 2017
 *      Author: alx
 */

#include "Operators.h"

Operators::Operators() {
	// TODO Auto-generated constructor stub

}

Operators::~Operators() {
	// TODO Auto-generated destructor stub
}

/*
 * 3/4. Write a program to enter a 4 digit number from the keyboard. Add 8 to the number and then divide it by 3.
 * Now, the modulus of that number is taken with 5 and then multiply the resultant value by 5.
 * Solve the question using assignment operators (eg. +=, -=, *=) and display the final result.
 */
void Operators::assignmentOperators() {
	int i;
	cout << "Enter a 4 digit integer";
	cin >> i;

	i += 8;
	cout << i << endl;

	i /= 3;
	cout << i << endl;

	i %= 5;
	cout << i << endl;

	i *= 5;
	cout << i << endl;
}

/*
 * 9. Write a program to enter the values of two variables from the keyboard
 * and then interchange the values of the two variables.
 * Ex. If entered value of x is 5 and y is 10 then
 * cout << x << " and " << y should print 10 and 5.
 */
void Operators::swapVars() {
	int x,y,temp;
	cout << "Enter value for x" << endl;
	cin >> x;
	cout << "Enter value for y" << endl;
	cin >> y;

	temp = x;    //temp is assigned the value of x
	x = y;       //x is assigned the value of y
	y = temp;

	cout << "Vars have been swapped, now x is " << x << " and y is " << y << endl;
}
