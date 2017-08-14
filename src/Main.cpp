/*
 * Main.cpp
 *
 *  Created on: Aug 9, 2017
 *      Author: alx
 */

#include "00_intro/Hello.h"
#include "01_lets_start/LetsStart.h"
#include "02_variables/Variables.h"
#include "03_operators/Operators.h"
#include "04_conditionals/Conditionals.h"
#include "05_loops/Loops.h"
#include "06_pointers/Pointers.h"
#include "07_array/Arrays.h"
#include "08_strings/Strings.h"
#include "09_macros/Macros.h"
#include "10_structures/Structures.h"
#include "11_classes/Rectangle.h"
#include "11_classes/Average.h"
#include "11_classes/Employee.h"
#include "12_subclasses/Animal.h"
#include "12_subclasses/Dog.h"
#include "13_multi-inheritance/Mammal.h"
#include "13_multi-inheritance/MarineAnimal.h"
#include "13_multi-inheritance/BlueWhale.h"

/*
 * all examples are in this main, just uncomment the examples you want to execute
 */
int main() {

	// INTRO
//	Hello hello;
//	hello.sayHello();

	// LETS START
//	LetsStart letsStart;
//	letsStart.one();
//	letsStart.two();
//	letsStart.three();
//	letsStart.five();

	// VARIABLES
//	Variables variables;
//	variables.printSumAndProduct();
//	variables.printDifferentVars();
//	variables.asciiValueOfChars();
//	variables.sumWithCast();

	// OPERATORS
//	Operators operators;
//	operators.assignmentOperators();
//	operators.swapVars();

	// CONDITIONALS
//	Conditionals conditionals;
//	conditionals.benefitCalculator();
//	conditionals.schoolGradeCalculator();

	// LOOPS
//	Loops loops;
//	loops.printPattern();
//	loops.factorialCalculator();
//	loops.averageAndProductCalculator();
//	loops.infiniteLoop();

	// POINTERS
//	Pointers pointers;
	// 1
//	pointers.pointerReferences();
	// 2
//	int i = 190;
//	pointers.printWithPointer(&i);
	// 3
//	int a=1000,b=78,c=3;
//	pointers.maxFinder(&a, &b, &c);
	// 4
//	float a=1.5, b=3.7;
//	cout << "Var a has value " << a << " and address " << &a << endl;
//	cout << "Var b has value " << b << " and address " << &b << endl;
//	pointers.swapWithPointers(&a, &b);
//	cout << "Var a has value " << a << " and address " << &a << endl;
//	cout << "Var b has value " << b << " and address " << &b << endl;

	// ARRAYS
//	Arrays arrays;
	// 1
//	arrays.checkNumberInArray();
	// 2
//	int size;
//	cout << "Enter a size for your int array" << endl;
//	cin >> size;
//	int array[size];
//	for (int i=0; i<size; i++) {
//		cout << "Enter int number " << i+1 << endl;
//		cin >> array[i];
//	}
//	cout << "Array before modification" << endl;
//	for (int k=0; k<size; k++) {
//		cout << array[k] << " ";
//	}
//	arrays.modifyArrayByReference(array, size);
//	cout << "Array after modification" << endl;
//	for (int k=0; k<size; k++) {
//		cout << array[k] << " ";
//	}
//	arrays.allocateArrayDynamically();

	// STRINGS
//	Strings strings;
//	strings.printStringVertically();
//	strings.printStringVerticallyDynamicAllocation();
//	strings.copyStrings();
//	strings.compareStrings();

	// MACROS
//	cout << average(2,5);
//	cout << module(-859.58);
//	cout << simpleInterest(5000,7,3600);

//	Structures structures;
	// 1
//	Date d1={31, 12, 2010}, d2={25,12,2010};
//	if ( structures.equalDates(d1, d2) ) {
//		std::cout << "Dates are the same!" << std::endl;
//	} else {
//		std::cout << "Different dates!" << std::endl;
//	}
//	structures.checkWorkReport();

	// CLASSES
	/*
	 * 5. Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class
	 * named 'Rectangle' with a function named 'Area' which returns the area.
	 * Length and breadth are passed as parameters to its constructor.
	 */
//	Classes::Rectangle rt1(4,2), rt2(5.6,7.2);
//	cout << rt1.getArea() << endl;
//	cout << rt2.getArea() << endl;
	/*
	 * 8. Print the average of three numbers entered by the user by creating a class named 'Average'
	 * having a function to calculate and print the average without creating any object of the Average class.
	 */
//	cout << Classes::Average::getAverage(1,2,3) << endl;
	/*
	 * 1. Write a program by creating an 'Employee' class having the following functions and print the final salary.
	 * 		'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
	 * 		'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.
	 * 	[DYNAMIC ALLOCATION]
	 */
//	Classes::Employee* e = new Classes::Employee("alx", 1000.0, 8);
//	std::cout << "before" << endl;
//	e->printEmployeeInfo();
//	e->addSal();
//	e->addWork();
//	std::cout << "after" << endl;
//	e->printEmployeeInfo();
//	delete e;
	/*
	 * Same as before for an array of Employees
	 */
//	int size = 2;
//	Classes::Employee* employees = new Classes::Employee[size];
//	for (int i=0; i<2; i++) {
//		std::cout << "Enter the name of employee number " << i+1 << std::endl;
//		std::string tmpName;
//		std::cin >> tmpName;
//		employees[i].setName(tmpName);
//		std::cout << "Enter the salary in $ of employee number " << i+1 << std::endl;
//		int tmpSalary;
//		std::cin >> tmpSalary;
//		employees[i].setSalary(tmpSalary);
//		std::cout << "Enter the workHours of employee number " << i+1 << std::endl;
//		int tmpHoursOfWork;
//		std::cin >> tmpHoursOfWork;
//		employees[i].setHoursOfWork(tmpHoursOfWork);
//	}
//	for (int j=0; j<size; j++) {
//		std::cout << "before" << endl;
//		employees[j].printEmployeeInfo();
//		employees[j].addSal();
//		employees[j].addWork();
//		std::cout << "after" << endl;
//		employees[j].printEmployeeInfo();
//	}
//	delete[] employees;

	// SUBCLASSES
	/*
	 * Create a parent-class Animal and a subclass Dog. Make Dog override a generic method sound() from the parent.
	 * Make Dog have more data members than Animal with different getter methods defined both in parent and subclass.
	 * Create a child object and invoke getters on both parent and child defined data members.
	 */
//	Subclasses::Dog d;
//	d.sound();
//	d.hasTail();

	// MULTI-INHERITANCE
	/*
	 * 1. Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale which inherits
	 * both the above classes. Now, create a function in each of these classes which prints "I am mammal",
	 * "I am a marine animal" and "I belong to both the categories: Mammals as well as Marine Animals" respectively.
	 * Now, create an object for each of the above class and try calling
	 * 	1 - function of Mammals by the object of Mammal
	 * 	2 - function of MarineAnimal by the object of MarineAnimal
	 * 	3 - function of BlueWhale by the object of BlueWhale
	 * 	4 - function of each of its parent by the object of BlueWhale
	 */
//	Multiinheritance::BlueWhale b;
//	b.printMammal();
//	b.printMarineAnimal();
//	b.printBlueWhale();

	return 0;
}
