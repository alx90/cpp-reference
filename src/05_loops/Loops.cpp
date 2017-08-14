/*
 * Loops.cpp
 *
 *  Created on: Aug 10, 2017
 *      Author: alx
 */

#include "Loops.h"

Loops::Loops() {
	// TODO Auto-generated constructor stub

}

Loops::~Loops() {
	// TODO Auto-generated destructor stub
}

/*
 * 2. Print the following pattern using loop :
 *   *
 *   **
 *   ***
 *   ****
 */
void Loops::printPattern() {
	for (int i=1; i<=4; i++) {
		for (int j=1; j<=i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
}

/*
 * 5. Factorial of any number n is represented by n! and is equal to 1*2*3*....*(n-1)*n. E.g.-
 *    4! = 1*2*3*4 = 24
 *    3! = 3*2*1 = 6
 *    2! = 2*1 = 2
 *    Also,
 *    1! = 1
 *    0! = 0
 *    Write a C++ program to calculate factorial of a number.
 */
void Loops::factorialCalculator() {
	int n, result;
	cout << "Enter an integer" << endl;
	cin >> n;
	if (n == 0) {
		result = 0;
	} else if (n == 1) {
		result = 1;
	} else {
		result = n;
		for (int i=n; i>1; i--) {
			result *= (i-1);
		}
	}

	cout << "The factorial is " << result << endl;
}

/*
 * 7. Take integer inputs from user until he/she presses q ( Ask to press q to quit after every integer input ). Print average and product of all numbers.
 */
void Loops::averageAndProductCalculator() {
	int n, counter = 1, product = 1;
	double sum = 0, average;
	char c;
	do {
		cout << "Enter an integer" << endl;
		cin >> n;

		product *= n;
		sum += n;
		average = sum / counter;
		counter++;

		cout << "Enter 'q' to exit" << endl;
		cin >> c;
	} while (c != 'q');

	cout << "Product is " << product << " and average is " << average << endl;
}

/*
 * 8. Write an infinite loop.
 * A inifinte loop never ends. Condition is always true.
 */
void Loops::infiniteLoop() {
//	cout << "Press ctrl+c to exit" << endl;
	while (1) cout << "This loop will never end" << endl;;
}
