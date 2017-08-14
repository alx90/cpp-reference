/*
 * Arrays.cpp
 *
 *  Created on: Aug 11, 2017
 *      Author: alx
 */

#include "Arrays.h"

Arrays::Arrays() {
	// TODO Auto-generated constructor stub

}

Arrays::~Arrays() {
	// TODO Auto-generated destructor stub
}

/*
 * 2. Take 3 integer inputs from user and store them in an array. Again ask user to give a number.
 * Now, tell user whether that number is present in array or not.
 */
void Arrays::checkNumberInArray() {
	int array[3];
	int numberToSearch;
	bool isPresent = false;
	for (int i=0; i<3; i++) {
		cout << "Enter an integer" << endl;
		cin >> array[i];
	}
	cout << "Enter a number to be searched into the array" << endl;
	cin >> numberToSearch;
	for (int j=0; j<3; j++) {
		if (array[j] == numberToSearch) {
			isPresent = true;
			break;
		}
	}
	if (isPresent) {
		cout << numberToSearch << " has been found in your array!";
	} else {
		cout << numberToSearch << " is NOT present in your array!";
	}
}

// Write a function that modifies an array by reference, reversing its elements
void Arrays::modifyArrayByReference(int array[], int size) {
	int tmpCopy[size];
	for (int i=0; i<size; i++) {
		tmpCopy[i] = array[i];
	}

	for (int j=0; j<size; j++) {
		array[j] = tmpCopy[size-j-1];
	}
}

// Dynamic array allocation
void Arrays::allocateArrayDynamically() {
	int length, sum = 0;
	cout << "Enter the number of students in the group" << endl;
	cin >> length;
	int *marks = new int[length];	// dynamic array allocation
	cout << "Enter the marks of the students" << endl;
	for( int i = 0; i < length; i++ ) {
		cin >> *(marks+i);
	}
	for( int i = 0; i < length; i++ ) {
		sum += *(marks+i);
	}
	cout << "sum is " << sum << endl;
}
///*
// * Note: same as the last function but not dynamically allocating memory... works the same!!!
// */
//void Arrays::allocateArray() {
//	int length, sum = 0;
//	cout << "Enter the number of students in the group" << endl;
//	cin >> length;
//	int marks[length];	// dynamic array allocation
//	cout << "Enter the marks of the students" << endl;
//	for( int i = 0; i < length; i++ ) {
//		cin >> marks[i];
//	}
//	for( int i = 0; i < length; i++ ) {
//		sum += marks[i];
//	}
//	cout << "sum is " << sum << endl;
//}
