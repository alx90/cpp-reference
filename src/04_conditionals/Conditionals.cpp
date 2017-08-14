/*
 * Conditionals.cpp
 *
 *  Created on: Aug 10, 2017
 *      Author: alx
 */

#include "Conditionals.h"

Conditionals::Conditionals() {
	// TODO Auto-generated constructor stub

}

Conditionals::~Conditionals() {
	// TODO Auto-generated destructor stub
}

/*
 * 4. A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
 * Ask user for their salary and year of service and print the net bonus amount.
 */
void Conditionals::benefitCalculator() {
	int years, salary, bonus;
	cout << "Enter your years of service" << endl;
	cin >> years;

	if (years > 5) {
		cout << "Enter your yearly salary in $" << endl;
		cin >> salary;
		bonus = (salary/100) * 5;
		cout << "You'll earn a bonus of " << bonus << "$ this year" << endl;
	} else {
		cout << "Employees with less than 5 years of service won't get any bonus" << endl;
	}

}

/*
 * 5. A school has following rules for grading system:
 * a. Below 25 - F
 * b. 25 to 45 - E
 * c. 45 to 50 - D
 * d. 50 to 60 - C
 * e. 60 to 80 - B
 * f. Above 80 - A
 * Ask user to enter marks and print the corresponding grade.
 */
void Conditionals::schoolGradeCalculator() {
	int mark;
	char grade;
	cout << "Enter your mark" << endl;
	cin >> mark;

	if (mark < 25){
		cout << "F" << endl;
	}
	else if(mark >=25 && mark <45){
		cout << "E" << endl;
	}
	else if(mark >=45 && mark <50){
		cout << "D" << endl;
	}
	else if(mark >=50 && mark <60){
		cout << "C" << endl;
	}
	else if(mark >=60 && mark <80){
		cout << "B" << endl;
	}
	else if(mark >=80 && mark <100){
		cout << "A" << endl;
	}
	else{
		cout << "Invalid mark" << endl;
	}
}
