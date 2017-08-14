/*
 * Strings.cpp
 *
 *  Created on: Aug 12, 2017
 *      Author: alx
 */

#include "Strings.h"

Strings::Strings() {
	// TODO Auto-generated constructor stub

}

Strings::~Strings() {
	// TODO Auto-generated destructor stub
}

/*
 * 2. Write a program to print every character of a string (single or multi-word) entered by user in a new line using loop.
 */
void Strings::printStringVertically() {
	char inputString[30];
	cout << "Enter a single-word or multi-word string (max 30 chars)" << endl;
	cin.getline(inputString, sizeof(inputString));
	cout << endl;
	for (int i=0; i<sizeof(inputString); i++) {
		if (inputString[i] == '\0') break;	// exit loop when string teminator is found
		else cout << inputString[i] << endl;
	}
}

/*
 * 6. Write a program to enter a string s1 and copy it to another string s2.
 */
void Strings::copyStrings() {
	char source[30], destination[30];
	cout << "Enter a SOURCE string (max 30 chars)" << endl;
	cin.getline(source, sizeof(source));
	strcpy(destination, source);
	cout << "SOURCE: " << source << endl;
	cout << "DSTINATION: " << destination << endl;
}

/*
 * 7. Write a program to compare if the two strings entered by user are equal or not without using predefined String functions.
 */
void Strings::compareStrings() {
	char s1[30], s2[30];
	cout << "Enter the first string (max 30 chars)" << endl;
	cin.getline(s1, sizeof(s1));
	cout << "Enter the second string (max 30 chars)" << endl;
	cin.getline(s2, sizeof(s2));
	if (strcmp(s1, s2)==0) cout << "Strings are equal" << endl;
	else cout << "Strings are different" << endl;
}

