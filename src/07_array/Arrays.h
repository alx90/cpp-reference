/*
 * Arrays.h
 *
 *  Created on: Aug 11, 2017
 *      Author: alx
 */

#ifndef SRC_07_ARRAY_ARRAYS_H_
#define SRC_07_ARRAY_ARRAYS_H_

#include <iostream>
using namespace std;

class Arrays {
public:
	Arrays();
	virtual ~Arrays();

	void checkNumberInArray();
	void modifyArrayByReference(int array[], int size);
	void allocateArrayDynamically();
};

#endif /* SRC_07_ARRAY_ARRAYS_H_ */
