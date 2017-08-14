/*
 * Employee.cpp
 *
 *  Created on: Aug 14, 2017
 *      Author: alx
 */

#include "Employee.h"

namespace Classes {

Employee::Employee() {}	// note that even empty constructor needs to be defined

Employee::Employee(std::string n, float s, int h) {
	name = n;
	salary = s;
	hoursOfWork = h;
}

Employee::~Employee() {
	// TODO Auto-generated destructor stub
}

void Employee::printEmployeeInfo() {
	std::cout << "name=" << name << ", salary=" << salary << ", hoursOfWork=" << hoursOfWork << std::endl;
}
void Employee::addSal() {
	salary += 10;
}
void Employee::addWork() {
	if (hoursOfWork > 6) salary += 50;
}

} /* namespace Classes */
