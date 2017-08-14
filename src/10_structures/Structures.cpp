/*
 * Structures.cpp
 *
 *  Created on: Aug 14, 2017
 *      Author: alx
 */

#include "Structures.h"

Structures::Structures() {
	// TODO Auto-generated constructor stub

}

Structures::~Structures() {
	// TODO Auto-generated destructor stub
}

/*
 * 9. Write a program to compare two dates entered by user. Make a structure named Date to store the elements day,
 * month and year to store the dates.
 * If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".
 */
bool Structures::equalDates(Date d1, Date d2) {
	if (d1.day != d2.day) return false;
	if (d1.month != d2.month) return false;
	if (d1.year != d2.year) return false;
	return true;
}

/*
 * 1. Write a structure to store the names, salary and hours of work per day of 3 employees in a company.
 * Write a program to increase the salary depending on the number of hours of work per day as follows and then print
 * the name of all the employees along with their final salaries.
 * Hours of work per day	>8
 * Increase in salary		$50
 */
void Structures::checkWorkReport() {
	int size=3;
	WorkReport reports[size];
	for (int i=0; i<size; i++) {
		std::cout << "Enter the name of employee number " << i+1 << std::endl;
		std::cin >> reports[i].name;
		std::cout << "Enter the salary in $ of employee number " << i+1 << std::endl;
		std::cin >> reports[i].salary;
		std::cout << "Enter the workHours of employee number " << i+1 << std::endl;
		std::cin >> reports[i].hoursOfWork;
	}

	for (int j=0; j<size; j++) {
		if (reports[j].hoursOfWork>8) {
			reports[j].salary += 50;
		}
		std::cout << "Employee number " << j+1 << std::endl;
		std::cout << "name: " << reports[j].name << std::endl;
		std::cout << "hours of work: " << reports[j].hoursOfWork << std::endl;
		std::cout << "salary with eventual increment: " << reports[j].salary << std::endl;
	}
}
