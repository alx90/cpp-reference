/*
 * Rectangle.cpp
 *
 *  Created on: Aug 14, 2017
 *      Author: alx
 */

#include "Rectangle.h"

namespace Classes {

	Rectangle::Rectangle(float l, float b) {
		length = l;
		breadth = b;
	}

	Rectangle::~Rectangle() {
		// TODO Auto-generated destructor stub
	}

	float Rectangle::getArea() {
		return length*breadth;
	}
} /* namespace Classes */
