/*
 * Animal.cpp
 *
 *  Created on: Aug 14, 2017
 *      Author: alx
 */

#include "Animal.h"

namespace Subclasses {

Animal::Animal() {
	// TODO Auto-generated constructor stub
}

Animal::~Animal() {
	// TODO Auto-generated destructor stub
}

void Animal::sound() {
	std::cout << "generic animal sound" << std::endl;
}
int Animal::getLegsNumber() {
	return numberOfLegs;
}

} /* namespace Subclasses */
