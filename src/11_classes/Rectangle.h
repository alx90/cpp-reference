/*
 * Rectangle.h
 *
 *  Created on: Aug 14, 2017
 *      Author: alx
 */

#ifndef SRC_11_CLASSES_RECTANGLE_H_
#define SRC_11_CLASSES_RECTANGLE_H_

namespace Classes {
	class Rectangle {
		float length;
		float breadth;

		public:
			Rectangle(float l, float b);
			virtual ~Rectangle();

			float getArea();
	};

} /* namespace Classes */

#endif /* SRC_11_CLASSES_RECTANGLE_H_ */
