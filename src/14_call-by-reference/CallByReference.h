/*
 * CallByReference.h
 *
 *  Created on: Aug 27, 2017
 *      Author: alx
 */

#ifndef SRC_14_CALL_BY_REFERENCE_CALLBYREFERENCE_H_
#define SRC_14_CALL_BY_REFERENCE_CALLBYREFERENCE_H_

class CallByReference {
public:
	CallByReference();
	virtual ~CallByReference();

	void swapWithPointers( int *num1, int *num2);
	void swapWithReferences ( int& num1, int& num2);
};

#endif /* SRC_14_CALL_BY_REFERENCE_CALLBYREFERENCE_H_ */
