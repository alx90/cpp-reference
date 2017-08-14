/*
 * Dog.cpp
 *
 *  Created on: Aug 14, 2017
 *      Author: alx
 */

#include "Dog.h"

namespace Subclasses {

Dog::Dog() {
	numberOfLegs = 4;
	tail = true;
}

Dog::~Dog() {
	// TODO Auto-generated destructor stub
}

void Dog::sound() {		// override example
	std::cout << "woof!" << std::endl;
}
void Dog::hasTail() {
	std::cout << "tail is " << tail << std::endl;
}

} /* namespace Subclasses */
