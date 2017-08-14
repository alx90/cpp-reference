/*
 * Dog.h
 *
 *  Created on: Aug 14, 2017
 *      Author: alx
 */

#ifndef SRC_12_SUBCLASSES_DOG_H_
#define SRC_12_SUBCLASSES_DOG_H_

#include <iostream>
#include "Animal.h"

namespace Subclasses {

class Dog : public Animal {		// Dog extends Animal
	bool tail;
public:
	Dog();
	virtual ~Dog();

	void sound();
	void hasTail();
};

} /* namespace Subclasses */

#endif /* SRC_12_SUBCLASSES_DOG_H_ */
