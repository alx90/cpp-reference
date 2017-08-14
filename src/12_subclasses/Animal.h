/*
 * Animal.h
 *
 *  Created on: Aug 14, 2017
 *      Author: alx
 */

#ifndef SRC_12_SUBCLASSES_ANIMAL_H_
#define SRC_12_SUBCLASSES_ANIMAL_H_

#include <iostream>

namespace Subclasses {

class Animal {
protected:
	int numberOfLegs;
public:
	Animal();
	virtual ~Animal();

	void sound();
	int getLegsNumber();
};

} /* namespace Subclasses */

#endif /* SRC_12_SUBCLASSES_ANIMAL_H_ */
