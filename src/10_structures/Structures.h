/*
 * Structures.h
 *
 *  Created on: Aug 14, 2017
 *      Author: alx
 */

#ifndef SRC_10_STRUCTURES_STRUCTURES_H_
#define SRC_10_STRUCTURES_STRUCTURES_H_

#include <iostream>

struct Date {
	int day;
	int month;
	int year;
};

struct WorkReport {
	std::string name;
	float salary;
	int hoursOfWork;
};

class Structures {
public:
	Structures();
	virtual ~Structures();

	bool equalDates(Date d1, Date d2);
	void checkWorkReport();
};

#endif /* SRC_10_STRUCTURES_STRUCTURES_H_ */
