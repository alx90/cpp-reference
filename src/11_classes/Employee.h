/*
 * Employee.h
 *
 *  Created on: Aug 14, 2017
 *      Author: alx
 */

#ifndef SRC_11_CLASSES_EMPLOYEE_H_
#define SRC_11_CLASSES_EMPLOYEE_H_

#include <iostream>

namespace Classes {

class Employee {
	std::string name;
	float salary;
	int hoursOfWork;
public:
	// example of constructor overloading
	Employee();
	Employee(std::string n, float s, int h);
	virtual ~Employee();


	void printEmployeeInfo();
	void addSal();
	void addWork();

	void setHoursOfWork(int hoursOfWork) {
		this->hoursOfWork = hoursOfWork;
	}

	void setName(const std::string& name) {
		this->name = name;
	}

	void setSalary(float salary) {
		this->salary = salary;
	}
};

} /* namespace Classes */

#endif /* SRC_11_CLASSES_EMPLOYEE_H_ */
