/*
 * Macros.h
 *
 *  Created on: Aug 12, 2017
 *      Author: alx
 */

#ifndef SRC_09_MACROS_MACROS_H_
#define SRC_09_MACROS_MACROS_H_

#include <cmath>

/*
 * 3. Write a macro to find average of two numbers.
 */
#define average(a,b) ( (a+b)/2.0 )	// note division by 2.0 to make the result float and not int

/*
 * 4. Write a macro to find absolute value of number.
 */
#define module(x) (std::abs(x))

/*
 * 5. Write a macro to calculate simple interest from principal, rate of interest and time.
 * Simple interest = (principal*rate of interest*time)/100.
 */
#define simpleInterest(principal, rate, time) ( (principal*rate*time)/100 )

class Macros {

};

#endif /* SRC_09_MACROS_MACROS_H_ */
