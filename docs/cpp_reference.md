Table of Contents
=================

* [INTRODUCTION](#introduction)
	* [The main function](#the-main-function)
	* [Booleans and conditions evaluation](#booleans-and-conditions-evaluation)
	* [Comments](#comments)
	* [Pre-processor](#pre-processor)
* [BASIC REFERENCE](#basic-reference)
	* [Keywords](#keywords)
		* [using](#using)
		* [typedef](#typedef)
		* [friend](#friend)
	* [Operators](#operators)
		* [arithmetic operators](#arithmetic-operators)
		* [relational operators](#relational-operators)
		* [logical operators](#logical-operators)
		* [assignment operators](#assignment-operators)
		* [increment and decrement operators](#increment-and-decrement-operators)
		* [sizeof() operator](#sizeof-operator)
	* [Conditional Operators](#conditional-operators)
		* [if, else, else if](#if-else-else-if)
		* [ternary operator](#ternary-operator)
		* [switch case](#switch-case)
	* [Loops](#loops)
		* [while](#while)
		* [for](#for)
		* [do while](#do-while)
		* [For-each](#for-each)
* [VARIABLES AND LITERALS](#variables-and-literals)
	* [Variables Initialization](#variables-initialization)
	* [Data Types](#data-types)
	* [Left and Right Values and Literals](#left-and-right-values-and-literals)
	* [Casting](#casting)
	* [Variables Scope](#variables-scope)
	* [Storage Classes](#storage-classes)
* [CONSTANTS](#constants)
	* [Constant Variables](#constant-variables)
	* [Constants in Functions](#constants-in-functions)
	* [Constants in Classes](#constants-in-classes)
	* [Const Pointers](#const-pointers)
	* [Pointer to Const Variable](#pointer-to-const-variable)
* [FUNCTIONS](#functions)
	* [Function Scope](#function-scope)
	* [Recursion](#recursion)
	* [Inline Functions](#inline-functions)
* [POINTERS](#pointers)
	* ["Call by Value" and "Call By Reference"](#call-by-value-and-call-by-reference)
* [STORAGE DATA-STRUCTURES](#storage-data-structures)
	* [Arrays](#arrays)
		* [declaration and initialization](#declaration-and-initialization)
	* [Pointers to Array](#pointers-to-array)
		* [passing an array to a function](#passing-an-array-to-a-function)
		* [C-style arrays](#c-style-arrays)
	* [Vectors](#vectors)
	* [Strings](#strings)
		* [taking string inputs and printing them](#taking-string-inputs-and-printing-them)
		* [passing strings to functions](#passing-strings-to-functions)
		* [C-style strings](#c-style-strings)
	* [Structures](#structures)
		* [passing structures to functions](#passing-structures-to-functions)
	* [Unions](#unions)
	* [ENUMS](#enums)
		* [enum classes](#enum-classes)
* [OOP in C  ](#oop-in-c)
	* [Classes](#classes)
	* [Objects](#objects)
	* [Access Modifiers](#access-modifiers)
	* [Static](#static)
	* [Initialization List](#initialization-list)
	* [Inheritance](#inheritance)
		* [Constructor in sub-classes](#constructor-in-sub-classes)
		* [Multiple Inheritance](#multiple-inheritance)
	* [Overloading and Overrriding](#overloading-and-overrriding)
		* [Overloading](#overloading)
		* [Overriding](#overriding)
	* [Abstact Classes and Interfaces](#abstact-classes-and-interfaces)
		* [Abstract Class](#abstract-class)
		* [Interface](#interface)
* [DYNAMIC MEMORY ALLOCATION](#dynamic-memory-allocation)
	* [new and delete operators](#new-and-delete-operators)
	* [Dynamic Allocation of Arrays](#dynamic-allocation-of-arrays)
	* [Dynamic Allocation of Objects](#dynamic-allocation-of-objects)
* [TEMPLATES](#templates)
	* [Template Functions](#template-functions)
	* [Template Classes](#template-classes)
* [FILE IO](#file-io)

# INTRODUCTION
C++ is a general-purpose programming language, mostly based on standard C, including generic programming and OOP(object-oriented programming) features. Compared to C, C++ offers also some low-level facilities for memory manipulation.
- C++ is a case-sensitive language
- unnecessary whitespaces and new lines are ignored just like in java

### The main function
The execution of __every C++ program starts from the main()__ function. __All C++ programs must have a one and only main()__ function.<br>
Here is a simple main() example which takes an input from the user and prints it on screen:
```c
#include <iostream>
int main() {
	int n; // var declaration
	std::cin >> n; // waits for input and fills n
	std::cout << n; // print n to screen
	return 0;
}
```
_notes:_
- __std__ stands for the 'standard' namespace, a namespace is simply a container into wich you can define both functions and variables. The __std__ namespace resides into the __iostream__ library, which is included using the __#include <iostream>__ syntax.
- __cout__ is a function defined into  __std__ namespace. Functions or variables inside namespaces can be accessed using the __::__ syntax.
- __<< operator is the output operator__ that passes _Hello World_ string into the __std::cout__ function.

### Booleans and conditions evaluation
Unlike in C, in C++ booleans have a dedicated data type, but underneath they are still treated like simple numeric values (0 and 1).<br>
Considering this, all conditions in C++ can be written using both booleans or numbers, anyway they will always be evaluated underneath like __false if equal to 0__ and __true if different from 0__. Ex:
```c
// Ex.
if(false)	// false
if(true)	// true
if(0)		// false
if(1)		// true
if(2)		// true
if(0 == false)	// true
if(0 == true)	// false
if(1 == false)	// false
if(1 == true)	// true
if(2 == false)	// false
if(2 == true)	// false
cout << false	// 0
cout << true	// 1
```

### Comments
- __//__ is used for single-line comments
- __/&ast; &ast;/__ is used for multi-line comments

### Pre-processor
C++ programs are pre-processed before being executed. The pre-processor simply replaces all pre-processor directives with the corresponding code. __All directives starting with a # symbol are pre-processor directives__.<br>
Most common pre-processor directives are:
- __#include__: inclusions are replaced by pre-processor before execution making header files available in our program.
- __#define__: is used to define _constant values_ or _macros_ that will be available globally in the program. Pre-processor replaces the objects using #define around the program with their value, or macro code, before execution.

# BASIC REFERENCE

### Keywords
In any language keywords are reserved words with a special meaning to each of them. This is the list of C++ keywords:

||||
|------|-----|-----|
|asm|auto|bool|
|break|case|catch|
|char|class|const|
|const_cast|continue|default|
|delete|do|double|
|dynamic_cast|else|enum|
|explicit|export|extern|
|false|float|for|
|friend|goto|if|
|inline|int|long|
|mutable|namespace|new|
|operator|private|protected|
|public|register|reinterpret_cast|
|return|short|signed|
|sizeof|static|static_cast|
|struct|switch|template|
|this|throw|true|
|try|typedef|typeid|
|typename|union|unsigned|
|using|virtual|void|
|volatile|wchar_t|while|

##### using
_using_ keyword can be used to alias a namespace or a function. In this example after the __using__ definition, __std__ namespace functions can be invoked without the need to specify the namespace itself:
```c
#include <iostream>
int main() {
	using namespace std;
	// now I can call 'cout' instead of 'std::cout' and so on
	cout << "Hello World" << endl;
	cout << "This is my second line" << endl;
	return 0;
}
```

##### typedef
_typedef_ keyword can be used to assign an alias to an existing data type. It works with structs and unions too.
```c
// Ex.1
#include <iostream>
int main(){
	typedef unsigned int ui;	// giving the "unsigned int" data type the alias "ui"
	ui i = 5, j = 8;		// defining unsigned integers like "ui"
	std::cout << "i = " << i << std::endl;
	std::cout << "j = " << j << std::endl;
	return 0;
}

// Ex.2
#include <iostream>
#include <cstring>
using namespace std;
typedef struct student {	// giving the struct "student" the alias "st"
  	int roll_no;
  	char name[30];
  	int phone_number;
} st;
int main(){
	st p1;	// using the alias for student
	p1.roll_no = 1;
  	cout << "roll no : " << p1.roll_no << endl;
	return 0;
}
```

##### friend
friend keyword is used to grant the access to the private and protected members of a class to another class or function:
- __friend function__: when declaring a class we can mark a function as _friend_ to grant it the access to all private and protected members of the class itself
	```c
	// Ex.
	#include <iostream>
	using namespace std;
	class Temperature {
		int celsius;
		public:
			Temperature() {
				celsius = 0;
			}
			friend int temp( Temperature );   // declaring friend function
	};
	int temp( Temperature t ) {	// friend function definition
		t.celsius = 40;	// direct access to private member celsius
		return t.celsius;
	}
	int main() {
		Temperature tm;
		cout << "Temperature in celsius : " << temp( tm ) << endl;
		return 0;
	}
	```
- __friend class__: we can make a class B _friend_ of another class A in order to grant to B the access of to the members of A:
	```c
	class A {
	    friend class B;	// B is declared as a friend of A
	};
	class B {

	};

	// Ex.
	#include <iostream>
	using namespace std;
	class Square {
		friend class Rectangle;      // declaring Rectangle as friend class of Square
		int side;	// private data member
		public:
			Square (int s) {	// Square constructor
				side = s;
			}
	};
	class Rectangle {
		int length;
		int breadth;
		public:
			void shape(Square a) {
				length = a.side;	// being Rectangle a friend of Square it can access private members from Square objects
				breadth = a.side;
			}
	};
	int main() {
		Square square(5);
		Rectangle rectangle;
		rectangle.shape(square);
		return 0;
	}
	```

### Operators

##### arithmetic operators
Perform arithmetic operations and return result.<br>
_assuming a=8 and b=4_

|Operator|Description|Example|
|--------|-----------|-------|
|+       |Adds operands                      |a+b=12|
|-	     |Subtracts second operand from first|a-b=4|
|&ast;	 |Multiplies both operands           |a*b=32|
|/	     |Divides numerator by denominator   |a/b=2|
|%	     |Modulus Operator returns the remainder of an integer division|a%b=0|

##### relational operators
Check the relationship between two operands and return 1 if the relationship is true and 0 if it is false.<br>
_assuming a=8 and b=4_

|Operator|Description             |Example          |
|--------|------------------------|-----------------|
|==	     |Equal to	              |(a == b) is false|
|!=	     |Not equal to            |(a != b) is true |
|>	     |Greater than            |(a > b) is true  |
|<	     |Less than               |(a < b) is false |
|>=	     |Greater than or equal to|(a >= b) is true |
|<=	     |Less than or equal to   |(a <= b) is false|

##### logical operators
Perform logical operations and return 1 if the relationship is true and 0 if it is false.<br>
_assuming a=1 and b=0_

|Operator|Description                                                              |Example        |
|--------|-------------------------------------------------------------------------|---------------|
|&&|Logical AND. If both the operands are non-zero, then the condition becomes true|a&&b is 0|
|&#124;&#124;|Logical OR. If any one or both the operands are non-zero, then the condition becomes true|a&#124;&#124;b is 1|
|!|Logical NOT. It is used to reverse the condition. So, if a condition is true, ! makes it false and vice versa.|!a is 0|

##### assignment operators
|Operator|Description                                                                                           |Example                      |
|--------|------------------------------------------------------------------------------------------------------|-----------------------------|
|=       |Assigns value of right operand to left operand                                                        |C = A+B                      |
|+=      |Adds the value of right operand to left operand and assigns the final value to the left operand       |C+=A is same as C=C+A        |
|-=      |Subtracts the value of right operand from left operand and assigns the final value to the left operand|C-=A is same as C=C-A        |
|*=      |Multiplies the value right operand to left operand and assigns the final value to the left operand    |C&ast;=A is same as C=C&ast;A|
|/=      |Divides the value of left operand from right operand and assigns the final value to the left operand  |C/=A is same as C=C/A        |
|%=      |Takes modulus using two operands and assigns the result to the left operand                           |C%=A is same as C=C%A        |

##### increment and decrement operators
- __++__ operator increments by 1 the value of an integer var
- __--__ operator decerements by 1 the value of an integer var
both these operator can be used as a __prefix__ or as a __postfix__, the only difference between these 2  is that:
	- prefix returns the var value __after__ increment/decrement (a=8; a++ returns 8)
	- postfix returns the var value __before__ increment/decrement (a=8; ++a returns 9)

```c
#include <iostream>
int main() {
	using namespace std;
	int a=8, b=8, c=8, d=8;
	cout << "a++ = " << a++ << endl; // 8
	cout << "++b = " << ++b << endl; // 9
	cout << "c-- = " << c-- << endl; // 8
	cout << "--d = " << --d << endl; // 7
	return 0;
}
```
##### sizeof() operator
Returns the size of a variable (size of the data type definition)
```c
#include <iostream>
int main() {
	using namespace std;
	int i = 6;
	int j;
	char c;
	float f;
	double d;
	cout << "size of integer variable i : " << sizeof(i) << endl; // 4
	cout << "size of integer variable j : " << sizeof(j) << endl; // 4
	cout << "size of character variable c : " << sizeof(c) << endl; // 1
	cout << "size of float variable f : " << sizeof(f) << endl; // 4
	cout << "size of double variable d : " << sizeof(d) << endl; // 8
	return 0;
}
```

### Conditional Operators
All conditional operators in C++ are identical to Java.

##### if, else, else if
```c
// Ex.
#include <iostream>
int main() {
    using namespace std;
    char grade = 'A';
    if( grade == 'A' ){
      cout << "Excellent !" << endl;
    }
    else if(grade == 'B'){
      cout << "Outstanding !" << endl;
    }
    else if(grade == 'C'){
      cout << "Good !" << endl;
    }
    else if(grade == 'D'){
      cout << "Can do better" << endl;
    }
    else if(grade == 'E'){
      cout << "Just passed" << endl;
    }
    else if(grade == 'F'){
      cout << "You failed" << endl;
    }
    else{
      cout << "Invalid grade" << endl;
    }
    return 0;
}
```

##### ternary operator
```c
condition ? expression1 : expression2;

// Ex:
#include <iostream>
int main(){
	using namespace std;
	int age;
	cout << "Enter age" << endl;
	cin >> age;
	(age > 18) ? cout << "eligible to vote" : cout << "not eligible to vote";
	return 0;
}
```

##### switch case
Switching is permitted on basic data types like char, int, etc:
```c
switch(expression) {
    case constant1:
        statement(s);
        break;
    case constant2:
        statement(s);
        break;
	/* you can give any number of cases */
    default:
        statement(s);
}

// Ex.
#include <iostream>
int main() {
	using namespace std;
	char grade = 'B';
  	switch ( grade ) {
		case 'A':
      		cout << " Excellent ! " << endl;
    		 break ;
    	case 'B':
    		 cout << " Outstanding ! " << endl;
      		break ;
    	case 'C':
      		cout << " Good ! " << endl;
      		break ;
    	case 'D':
      		cout << " Can do better " << endl;
      		break ;
    	case 'E':
      		cout << " Just passed " << endl;
      		break ;
    	case 'F':
      		cout << " You failed " << endl;
      		break ;
    	default :
      		cout << " Invalid grade " << endl;
  	}
	return 0;
}
```
_note: No need to write break in default case because it automatically terminates once default statements are executed._

### Loops
All loops in C++ are identical to Java. Also __break _(jump out of the loop)___ and __continue _(jump to the next iteration)___ statements are the same.

##### while
```c
while(condition) {
    statement(s)
}

// Ex.
#include <iostream>
int main() {
    using namespace std;
    int n = 1;
    while( n <= 10){
        cout << n << endl;
        n++;
    }
    return 0;
}
```

##### for
```c
for(initialization; condition; propagation) {
    statement(s)
}

// Ex:
#include <iostream>
int main() {
	using namespace std;
	int n;
	for( n = 1; n <= 10; n++ ) {
		cout << n << endl;
	}
	return 0;
}
```

##### do while
```c
do {
    statement(s)
} while( condition );

// Ex.
#include <iostream>
int main() {
    using namespace std;
    int n = 1;
    do {
    	cout << n << endl;
      	n++;
    } while( n <= 10 );
    return 0;
}
```
##### For-each
In C++ is used to iterate over arrays .
```c
#include <iostream>

int main() {
	using namespace std;
	int ar[] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int m : ar) { // element data type matches with array data type
		cout << m << endl;	// prints single array elements
	}
	return 0;
}
```

# VARIABLES AND LITERALS

### Variables Initialization
An uninitialized variable is the one to which we have not assigned any value. Unlike some programming languages where a variable which has not been assigned any value takes a value zero, __an uninitialized variable in C++ by default takes some garbage value__.

### Data Types

|Type                        |Keyword|Size (bytes)|Range of Value                 |
|----------------------------|-------|------------|-------------------------------|
|Integer                     |int    |4           |-2,147,483,648 to 2,147,483,647|
|Floating point              |float  |4           |1.8E-38 to 3.4E+38             |
|Double floating point       |double |8           |2.2E-308 to 1.8E+308           |
|Character                   |char   |1           |–128 to 127                    |
|Boolean                     |bool   |1           |false or true                  |
- _notes:_<br>
	- The sizes of variables might change depending on the compiler and the computer you are using. Size of the variables will be different for 32 bit and 64 bit compilers.
	- __bool__ variables are filled with literals 'true' or 'false' but they evaluate to 0 or 1.
	- __char__ variables are assigned using 'x' literals and are internally managed with the respective 8bit ASCII code [using the _int(ch)_ function, you can get the ASCII code of ch]

### Left and Right Values and Literals
A C++ assignment is identified by the following members
```c
leftValue = rightValue
```
- __leftValue__ is a value which has an address and is usually a variable.
- __rightValue__ is the value assigned to the leftValue and can be either a variable, a function or a literal.
Here is an example of assignments using literals for various data types:
```c
#include <iostream>
int main() {
	using namespace std;
	int i;      //declaring integer variable
	float f;    //declaring float variable
	double d;   //declaring double variable
	char c;     //declaring character variable
	bool b, bl;     //decaring boolean variable;
	//assigning values to these variables
	i = 45;
	f = 34.234;
	d = 34.43242343;
	c = 'g'; // char are assigned with single quotes
	b = true;
	bl = 5 < 4;
	cout << "int : " << i << endl; // prints 45
	cout << "float : " << f << endl; // prints 34.234
	cout << "double : " << d << endl; // prints 34.43242343
	cout << "char : " << c << endl; // prints g
	cout << "b : " << b << endl; // prints 1
	cout << "bl : " << bl << endl; // prints 0
	return 0;
}
```

### Casting
To explicitly cast a variable to another data type use the round brackets syntax:
```c
#include <iostream>
int main(){
	float x = 2.45;
	std::cout << (int)x; // prints only 2 (the int part of x)
}
```
_note_: C++ performs even implicit casting on vars the same way java does.

### Variables Scope
Variables can either be:
- __local__: accessible only __within the function or block__(any group of statements enclosed within curly braces like function body, if, etc) they are declared in.
	```c
	#include <iostream>
	using namespace std;
	
	int multiply(int a, int b){	// a and b are copies of x,y, so x,y won't get modified
	        return a * b;
	}
	
	int main() {
	        int x = 3, y = 5, z;	// local vars
	        z = multiply( x, y );	// normally calling function passing by value
	        cout << z << endl;
	        return 0;
	}
	```
- __global__: can be accessed by any function in the program.
	```c
	#include <iostream>
	
	using namespace std;
	
	int g = 10;	// global var
	
	void func1(){
		g = 20;	// actually modifying the global var g
		cout << g << endl;
	}
	
	int main(){
		func1();
		g = 30;	// actually modifying the global var g
		cout << g << endl;
		return 0;
	}
	```
	_note: to make a global var defined in one file usable in another file it needs to be declared as __extern__ (see [storage classes](#storage-classes))_

### Storage Classes
Underneath the compiler stores some information about variables (scope, lifetime, etc) in special classes called storage classes. Each storage class is identified by a keyword:
- __auto__: used for local variables. There's no need to specify the auto keyword when declaring a local var.
- __extern__: this keyword is used in header files to declare global vars that can be used even in other program files.
	```c
	// Ex.
	my_header.h
		extern int g;	// declaring var g as extern (can be used by external files)

	my_program.cpp
		#include "my_header.h"
		#include <iostream>
		int main() {
			g = 4;		// I can access g even if it's declared in another file
			std::cout << g << std::endl;
			return 0;
		}
	```
- __static__: a variable declared as static once initialized, exists until the end of the program. static vars are visible only in the function, or at most in the file, they are declared in (unlike extern).
- __register__: when declaring a var using the register keyword, the var itself will not be stored in computer memory (RAM) as usual, but it will be stored in a register. The usage of this keyword depends on the hw the program is running on.
- __mutable__: see __const objects__.

# CONSTANTS
Constants are elements whose __value is assigned at time of declaration and can never change__ later throughout the program. __Constants are identified by the _const_ keyword__, that can be applied to different elements.

### Constant Variables
Cannot change once declared
```c
int main() {
    const int a = 5;		// declaring and initializing a const variable
    a++;			// this will give compilation error
    return 0;
}
```
### Constants in Functions
Functions can have:
- __const arguments__: function arguments cannot be changed once passed in
	```c
	void func(const int a) {	// const argument
		a = 5;    // compilation error
	}
	```
- __const return type__: can return only constant values
	```c
	const int func() {	// const return type
		return 4;	// returning constant value
	}
	```

### Constants in Classes
Classes can have:
- __const data members__: declared constant without value, initialized in constructor
	```c
	#include <iostream>
	using namespace std;
	class A 	{
		const int x;	// declaring const data member
		public:
			A(int y) {
				x = y;	// initializing const data member in constructor
			}
	};
	int main() {
		A a(5);	// member x of this object will be constantly initialized to 5
		return 0;
	}
	```

- __const function members__: cannot change the value of any data member of the class and cannot call any member function which is not constant
	```c
	class A {
	public:
		int x;
		void func() const {
			x = 0;        // this will give compilation error cause trying to modify a non const data member
		}
	};
	```
	_note: constructors cannot be const_

- __const objects__: are declared const, their members are initialized through constructor and can never change later
	```c
	#include <iostream>
	using namespace std;
	class A	{
		public:
			int x;
			A()	{	// constructor
				x = 0;
			}
	};
	int main() {
		const A a;      // declaring const object 'a' of class 'A'
		a.x = 10;       // compilation error, cannot change const objects
		return 0;
	}
	```
	_note: as an exception, a data member of a const object still can change if declared __mutable__ in the object class._

### Const Pointers
Once declared will always point to the same address (value in the address still can change obviously)
```c
int a = 4;
int* const p = &a;   // const pointer p pointing to the variable a
```

### Pointer to Const Variable
Simply a pointer to a constant variable (different from constant pointer, check syntax):
```c
const int* p;	// const pointer p pointing to a const int variable
```

# FUNCTIONS
Syntax for defining a function is
```c
return_type function_name (parameters) {
    //code
}

// example
float average( int num1, int num2 ) {
    float avg; /* declaring local variable */
    avg = ( num1 + num2 )/2.0; // avg is a local variable
    return avg; /* returning the average value */
}
```

Syntax for calling a function is
```c
function_name ( parameters ) ;

// Ex
average( num1, num2 );
```
### Function Scope
In order to properly call a function, it must be defined __before__ the point where I am making the call.
So assuming we want to call a "sayHello" function from our main function we have several ways to do it:
- Define and implement the function before calling it:
	```c
	#include <iostream>
	using namespace std;
	
	void sayHello() { // declaring sayHello function
	    cout << "Hello!" << endl; // implementing sayHello function
	}
	
	int main(){
		sayHello();
		return 0;
	}
	```
- Define the function before the call and implementing it after the call
	```c
	#include <iostream>
	using namespace std;
	void sayHello(); // declaring sayHello function
	int main(){
		sayHello();
		return 0;
	}
	void sayHello() {
	    cout << "Hello!" << endl; // implementing sayHello function
	}
	```
- Implement the function in a dedicated Class (.cpp) and declare it in the related header (.h), then simply include the header in the main() file
	```c
	#include <Hello.h>
	
	int main(){
		Hello hello;
		hello.sayHello();
		return 0;
	}
	```

### Recursion
Obviously any function (not only the main) can call other functions if they are defined before the call, and even a function calling itself is permitted (recursion) even if it's a borderline case.

### Inline Functions
When calling a function, first the function gets called and then its body gets executed. Obviously it takes comparatively more time to call a function and execute its code than to execute the code directly without any function call. <br>
By using the keyword __inline__ when declaring a function, the compiler will replace the function call, straight with the code inside the function, saving the time that is taken for the call. Ex:
```c
#include <iostream>

using namespace std;

inline int sum(int x, int y) {
	return x+y;
}

int main() {
	int a = 2, b = 3;
	cout << sum(a, b) << endl;
	return 0;
}
```
_note: An inline function must be defined at the time of its declaration_


# POINTERS
Anytime we declare a variable, its value will be stored in a given memory location. Any variables thus consists of an __address__ (memory location reserved for the variable) and a __value__ (actual value contained inside the memory address).<br>
For instance:
```c
int a = 10;	// generic var definition
```
- __a__ is the __value__ of  the var and corresponds to __10__
- __&a__ (_address-of_ operator) is the __address__ of the var and corresponds to something like __0xffff377c__ (just an example)

__A pointer is a variable that stores a memory address__. When storing the memory address of a var __a__ into a pointer __p__, then __p points to a__.
```c
<variable_type> *<name>; // pointer declaration syntax

// Ex.
int *p;		// declaration of a pointer to int
p = &a;		// assigning to p the address of a, now p points to a (the value of p is the address of a)
```
There are two ways to use the pointer to access information:
1. Use just the pointer name __p__ to access the __address__ of the pointed variable
2. Use __*p__ to access the __actual value__ stored at the pointed address (this process is called _dereferencing_).

_note: pointers should always be initialized before usage, to avoid accessing unknown memory and making the program crash_

The natural use of a pointer is to __call a function by reference__ passing the pointed __memory address__:
```c
call_to_function_expecting_memory_address(pointer);
```
Here is an example to understand the nature of all different elements involved:
```c
// Ex.
#include <iostream>
using namespace std;
int main(){
	int a = 10; 			// value=10, address=0xffff377c
  	int *p; 			// declare p pointer, will occupy another address like 0xffff3778
  	p = &a;				// p points to a
  	cout << "p = " << p << endl;	// prints 0xffff377c
  	cout << "*p = " << *p << endl;	// prints 10
  	cout << "&p = " << &p << endl;	// prints 0xffff3778
  	cout << "*&p = " << *&p < endl;	// this is a borderline case, prints 0xffff377c
	return 0;
}
```

### "Call by Value" and "Call By Reference"
- In normal function calls __(call by value)__, the parameters of a function are copies of the arguments passed in. So altering the parameters within the function won't affect the real values.
	```c
	// Ex:
	#include <iostream>
	
	using namespace std;
	
	void swap( int a, int b ) {
		int t;
		t = a;
		a = b;
		b = t;
	}
	
	int main(){
		int num1 = 1, num2 = 2;
		swap( num1, num2);
		// real values does NOT change
		cout << "First number = " << num1 << endl; // prints 1
		cout << "Second number = " << num2 << endl; // prints 2
		return 0;
	}
	```
- In call by reference, we pass the address of variables to the function. Passing address is like passing originals, so altering the parameters will alter the real values too. Call by reference can be performed using pointers or references, here are examples of both ways:
	```c
	// Ex of call by reference using POINTERS
	#include <iostream>
	using namespace std;
	
	// function using pointers
	void swapWithPointers( int *a, int *b ) {
		int t;
		t = *a;
		*a = *b;
		*b = t;
	}
	// function using references
	void swapWithReferences( int& a, int& b ) {
		int t;
		t = a;
		a = b;
		b = t;
	}
	
	int main(){
		int num1 = 1, num2 = 2;
		swapWithPointers( &num1, &num2);	// call by reference with pointers
		// -OR-
		swapWithReferences( num1, num2);	// call by reference with references
		// real values DO change
		cout << "First number = " << num1 << endl;	// prints 2
		cout << "Second number = " << num2 << endl;	// prints 1
		return 0;
	}
	```
	
	1. __Using Pointers__:
		- The caller passes var addresses __&num1__
		- The called function exposes __*a__ pointer args
		- The called function works on whole __*a__ parameters in order to modify actual values
	2. __Using References__:
		- The caller passes var value __num1__
		- The called function exposes __&a__ reference args
		- The called function works on simple __a__ parameters in order to modify actual values
	
_Note: one of the main differences between using pointers or references in call by reference, is that, unlike pointers, references cannot be null. Anyway a reference can still be invalid, so using references is not necessarily safer than using pointers._

# STORAGE DATA-STRUCTURES

### Arrays
```c
datatype array_name [array_size];
```
- In C++ an array is a collection of similar types of data
- Index of an array always starts with 0.
- Array allocates contiguous memory, this means that the memories of all elements of an array are allocated together and are continuous.
- Arrays length is specified at the time of declaration and remains constant till compile time.

##### declaration and initialization
Compiler needs to know the size of the array in order to reserve the necessary memory locations when declaring it. Initialization can be done 2 ways:
1. Size explicitly declared
```c
int n[3]
n[0] = 2;
n[1] = 4;
n[2] = 8;
```
2. Elements explicitly declared
```c
int n[ ]={ 2,4,8 };
```

### Pointers to Array
When an array name is used as an expression, it refers to a pointer to the first element, not the entire array. So to create a pointer to an array you can write:
```c
int age[50];
int *ptr;
ptr = age;	// Gives the memory address of the first array element without a reference operator(&)
```
As opposed of what you would do to create a pointer to a var
```c
int *ptr;
int num;
ptr = &num; // Requires & to give the memory address to the ptr
```
note that __&ast;p__, __&ast;(p+1)__, __&ast;(p+2)__, ... give access to the array __element values__.

##### passing an array to a function
Entire arrays cannot be passed to functions, but what we do is passing the array name. Actually the array name is the address of the
first element of the array itself and that is in fact a reference to the array. So de facto arrays gets always passed by reference.
```c
#include <iostream>
using namespace std;
void modifyArrayByReference(int array[], int size) {
	int tmpCopy[size];
	for (int i=0; i<size; i++) {
		tmpCopy[i] = array[i];
	}
	for (int j=0; j<size; j++) {
		array[j] = tmpCopy[size-j-1];	// -1 skips array terminator
	}
}
int main() {
	int size;
	cout << "Enter a size for your int array" << endl;
	cin >> size;
	int array[size];
	for (int i=0; i<size; i++) {
		cout << "Enter int number " << i+1 << endl;
		cin >> array[i];
	}
	cout << "Array before modification" << endl;
	for (int k=0; k<size; k++) {
		cout << array[k] << " ";	// prints 1 2 3
	}
	cout << endl;
	arrays.modifyArrayByReference(array, size);
	cout << "Array after modification" << endl;
	for (int k=0; k<size; k++) {
		cout << array[k] << " ";	// prints 3 2 1
	}
	cout << endl;
	return 0;
}
```
The same can be done using a pointer:
```c
#include <iostream>
using namespace std;
void display(int *p) {
    int i;
    for(i=0;i<8;++i) {
        cout << "n[" << i << "] = " << *p << endl;
        p++;	// *p is n[0], *(p+1) is n[1] and so on
    }
}
int main() {
    int size,j;
    int n[ ] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    display(n);
    return 0;
}
```
- Caller passes array name
- Called function exposes a pointer

##### C-style arrays
Remember that the basic C++ array is a C style array, so it is a very low level object with no facility functions at all (not even size, add, remove etc)<br>
There are other kinds of array that expose some high level functions like size, iterators, utility methods like for instance std::array contained into std lib.

### Vectors
Vectors are just arrays whose length changes dynamically according to the requirements. So opposite to arrays, for vectors there's no need to specify the length while declaring the vector, just add or remove items from it and the length will change accordingly.

The most common template for vectors is the one from std lib, that also offers many utility functions for size, ordering, adding deleting. For using std::vector, we need to include the <vector> header in our program.:
```c
std::vector<datatype> array_name;

// Ex.
#include <vector>
std::vector<int> numbers;
```
### Strings
Strings is simply an array of chars. String literals are always wrapped in double quotes __"my string"__ and the last element of the array is __"\0"__ that corresponds to the __string terminator__ (ASCII value of '\0' is '0').<br>
Declaring a string like:
```c
char myString[] = "Sam"
```
will result in the following array

|S|a|m|\0|
|-|-|-|--|
|_0_|_1_|_2_|_3_ |

##### taking string inputs and printing them
1. Single-word input
```c
#include <iostream>
int main() {
	using namespace std;
	char name[20];       //declaring string 'name'
	cin >> name; //taking string input like 'Alessio'
	cout << name << endl; //prints 'Alessio'
	return 0;
}
```
2. Multi-word input
```c
#include <iostream>
int main() {
	using namespace std;
	char name[20];       //declaring string 'name'
	cin.getline(name, sizeof(name)); //taking string input like 'Alessio Matteo'
	cout << name << endl; //prints 'Alessio Matteo'
	return 0;
}
```

##### passing strings to functions
Passing a string to a function is the same as passing an array (still a pass by reference):
```c
// Ex.
#include <iostream>
using namespace std;
void display( char ch[] ) {
	cout << ch;
}
int main() {
	char arr[30];
	cout << "Enter a word" << endl;
	cin >> arr;
	display(arr);
	return 0;
}
```
##### C-style strings
As already said, basic C++ strings are simple arrays and like array are very low level objects.
The _string_ template from the standard library (_std::string_) can  be used in order to have more facilities,
anyway the library __cstring__ exposes some basic utility functions on C-style strings too, here is the list:

|Function|Use|
|--------|---|
|strlen|calculates the length of string|
|strcat|Appends one string at the end of another|
|strncat|Appends first n characters of a string at the end of another|
|strcpy|Copies a string into another|
|strncpy|Copies first n characters of one string into another|
|strcmp|Compares two strings|
|strncmp|Compares first n characters of two strings|
|strchr|Finds first occurrence of a given character in a string|
|strrchr|Finds last occurrence of a given character in a string|
|strstr|Finds first occurrence of a given string in another string|

Here is an example of usage of the __cstring__ library:
```c
#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char s2[ ]= "Hello";
  	char s1[10];
  	strcpy(s1, s2);
  	cout << "Source string " << s2 << endl;	// prints hello
  	cout << "Target string " << s1 << endl;	// prints hello
	return 0;
}
```

### Structures
While array are used to collect similar data types, __a structure is a collection of dissimilar data types__.<br>
The syntax for structure is:
```c
struct structure_name {
	data-type member-1;
	data-type member-2;
	data-type member-3;
};

// Ex.
struct student {
	int id;
	std::string name;
	int phoneNumber;
};
```
Here is an example of usage of a structure:
``` c
#include <iostream>
#include <cstring>
using namespace std;
int main(){
	struct student 	{
		int id;
		string name;
		int phoneNumber;
	};
	struct student p1 = {1,"Brown",123443};	// inline struc initialization
  	struct student p2, p3=p1 ;		// copying p1 into p3
  	// standard struct initialization
  	p2.id = 2;
  	p2.name = "Sam";
  	p2.phoneNumber = 1234567822;
  	cout << "First Student" << endl;
  	cout << "id : " << p1.id << endl;
  	cout << "name : " << p1.name << endl;
  	cout << "phone number : " << p1.phoneNumber << endl;
  	cout << "Second Student" << endl;
  	cout << "id : " << p2.id << endl;
  	cout << "name : " << p2.name << endl;
  	cout << "phone number : " << p2.phoneNumber << endl;
  	cout << "Third Student" << endl;
  	cout << "id : " << p3.id << endl;
  	cout << "name : " << p3.name << endl;
  	cout << "phone number : " << p3.phoneNumber << endl;
	return 0;
}
```
Note that:
- To __access the members__ of a structure we use the classic object oriented __dot__ notation (__p1.name__).
- __Structures can be copied__ in one go (__p3=p1__).
- A collection of similar structures can be put into an __array of structures__ if needed (__struct student stud[5];__).

##### passing structures to functions
__1. Pass by value__ (passing a copy of the struct):
```c
#include <iostream>
#include <cstring>
using namespace std;
struct student {
	int id;
	string name;
	int phoneNumber;
};
void display(struct student st) {
  	cout << "id : " << st.id << endl;
  	cout << "Name : " << st.name << endl;
  	cout << "Phone number : " << st.phoneNumber << endl;
}
int main(){
	struct student s;
  	s.id = 4;
  	s.name = "Ron";
  	s.phoneNumber = 888888;
  	display(s);
	return 0;
}
```
__2. Pass by reference__ (modifying the original struct):
```c
#include <iostream>
#include <cstring>
using namespace std;
struct student {
	int id;
	string name;
	int phoneNumber;
};
void display(struct student *st) {
  	cout << "id : " << st -> id << endl;
  	cout << "Name : " << st -> name << endl;
  	cout << "Phone number : " << st -> phoneNumber << endl;
}
int main() {
	struct student s;
  	s.id = 4;
  	s.name = "Ron";
  	s.phoneNumber = 888888;
  	display(&s;);
	return 0;
}
```
Note that __-> notation__ is used to access the members of the structure using its reference.<br>
The same principle is valid with a pointer to a structure:
```c
// Ex.
#include <iostream>
#include <cstring>
using namespace std;
struct student {
	int id;
	string name;
};
int main(){
	struct student stud = {1, "Sam"};
  	struct student *ptr;	// pointer to a struct
  	ptr = &stud;		// ptr points to stud
  	cout << stud.id << stud.id << endl;	// using . to access struct members
  	cout << ptr->id << ptr->name << endl;	// using --> to access struct members
	return 0;
}
```

### Unions
Unions are formally exactly the same as structures:
```c
union unionName {	// union syntax, same as struct but with union keyword
	data-type member-1;
	data-type member-2;
	data-type member-3;
};
```
The only difference between unions and structures is the way they are handled in memory.
- __the amount of memory required to store a structure is the sum of the memory sizes of all its members__
	```c
	struct student1 {         // defining a struct
	  	int roll_no;
	  	char name[40];
	  	int phone_number;
	};
	```
	_this struct occupies 4 + 40 + 4 = 48bytes_

- __the memory size of a union is equal to the size of its member occupying the maximum space in the memory__
	```c
	union student2 {          // defining a union
		int roll_no;
		char name[40];
		int phone_number;
	};
	```
	_this union occupies 40 bytes_

The disadvantage of using a union instead of a struct is that __memebers of a union can be accessed only one at a time__ because the physical location to write them is the same. So if I write 2 different members of the union one after the other, when writing the second the location will be overwritten and the value of the first member will get corrupted (retrieving the first member will return a random value).
```c
#include <iostream>
#include <cstring>
using namespace std;
union student {
	int roll_no;
	int phone_number;
	char name[30];
};
int main() {
	union student p1;
	p1.roll_no = 1;
	p1.phone_number = 1234567822;
	strcpy(p1.name,"Brown");
	cout << "roll_no : " << p1.roll_no << endl;		// prints some random value
	cout << "phone_number : " << p1.phone_number << endl;	// prints some random value
	cout << "name : " << p1.name << endl;			// prints "Brown"
	return 0;
}
```

### ENUMS
An enumeration is a user-defined datatype that consists of a group of constant values. __Enum values in C++ can only be integers__, if no value is specified for an element, then an automatic value is assigned (automatic values goes like 0,1,2,etc from first to last element).
```c
enum enum_name {
    element1,	// no int is assigned, element value will be 0
    element2,	// no int is assigned, element value will be 1
    element3	// no int is assigned, element value will be 2
};

// Ex.
#include <iostream>
enum Season {
	Summer = 10,
	Spring = 15,
	Winter = 20,
	Autumn = 25
};
int main() {
	enum Season w;	// enum declaration
	w = Winter;	// enum initialization
	std::cout << w;	// prints 20
	return 0;
}
```

##### enum classes
Due to the fact that enums are simple integer values, and to avoid confusion between different enums whose elements share the same values, enums can be put into a scope using __class enums__
```c
enum class enum_name {
    element1,	// no int is assigned, element value will be 0
    element2,	// no int is assigned, element value will be 1
    element3	// no int is assigned, element value will be 2
};

// Ex.
#include <iostream>
enum class Season {
    Summer,
    Spring,
    Winter,
    Autumn
};
enum class Color {
    Blue,
    Pink,
    Green
};
int main() {
    Season s = Season::Summer;	// syntax to access a scoped enum
    Color c = Color::Blue;	// syntax to access a scoped enum
    if( s == c ) {
    	std::cout << "Equal" << std::endl;
    }
    else {
    	std::cout << "Not Equal" << std::endl;	// even if Summer and Blue have both value 0, "Not Equal" gets printed thanks to the use of enum classes
    }
    return 0;
}
```

# OOP in C++
C++, opposite to C, supports __Object Oriented Programming__.

###  Classes
A __class__ is a generalization of a certain data structure:
```c
// Ex.
#include <iostream>

using namespace std;

class Rectangle {
	public:
		/*
		 * data members declaration
		 */
		int length;         //length of rectangle
		int breadth;        //breadth of rectangle
		/*
		 * member functions
		 */
		// constructor
		Rectangle::Rectangle() { }
		// destructor
		Rectangle::~Rectangle() { }
		// custom member functions declaration
		void setLength(int l);
		void setBreadth(int b);
		int getArea();
};

// custom member functions definition
void Rectangle::setLength(int l) {
	length = l;
}
void Rectangle::setBreadth(int b) {
	breadth = b;
}
int Rectangle::getArea() {
	return length * breadth;
}
```
As you can see a C++ class is made of 2 main members
1. __data members__: in the class Rectangle, _length_ and _breadth_ are the data members since they store the information of the objects of the class.
2. __member functions__: _setLength()_, _setBreadth_ and _getArea()_ are the member functions of the Rectangle class. All member functions have __classname::__ (_Rectangle::_) before the function name, in order to tell the compiler that the function belongs to that given class.<br>
Two special member functions are always present in any C++ class:
	- __Constructor__: is a special function which is used to initialize the objects of the class. It is __named as the class__, has __no return type__, __can have parameters or can either be empty__. Even if no constructor is defined in the class, compiler automatically calls a default public constructor when instancing an object of the class.
	- __Destructor__: is the opposite of the constructor and is used to __destroy the object whenever the it goes out of scope__. Has the exact __same syntax of an empty constructor__, but the name is __preceeded by ~__. Destructor is always empty and gets __automatically called when the object goes out of scope__ (Ex. at the end of a code block where I declared the object), it can be invoked manually with the _delete_ operator when allocating memory dynamically. Even if there is no destructor defined in the class, compiler automatically calls a default destructor when distructing an object of the class.

### Objects
An object is an instance of a given class:
```c
int main() {
	Rectangle rt;	// creating a Rectangle object     
	rt.setLength(7);	// calling member functions on the created object using the . syntax
	rt.setBreadth(4);
	int area = rt.getArea();
	cout << "Area : " << area << endl;
	return 0;
}
```
- Objects can be stored into arrays using the syntax:
	```c
	Classname arrayName[size];

	// Ex.
	Student students[5];
	```
- Objects can be created using the _new_ operator when allocating memory dynamically.

### Access Modifiers
Are used to decide how the members (data and functions) of a class can be accessed. There are three types of access modifiers in C++:
- __public__: the member is accessible directly __everywhere outside__ the Class.
- __private__: the member is accessible directly __only inside__ the Class. By default, all the members of a class are private.
- __protected__: the member is accessible directly __only inside the class and its subclasses__.
Usually data members are declared private and function members are declared public in order to respect the principles of __encapsulation__ (no direct access to data, but only to the functions that handles it), anyway it's not an imperative to do so.

### Static
Class __data and function members__ can be declared __static__ so that they can be used without the need to instantiate an object of the class:
```c
Classname::staticMember

// Ex.
#include <iostream>

using namespace std;

class Rectangle {
	public:
		static void printArea( int l, int b ) {	// static function member
			cout << l*b << endl;
		}
};

int main() {
	Rectangle::printArea(4,7);	// syntax to call a static member
	return 0;
}
```

### Initialization List
Is a particular way of initializing class members when calling the constructor. It can be used anytime instead of the standard constructor syntax, anyway it needs to be used in some specific cases:
- Initialize a data member that is defined as __const__:
	```c
	#include <iostream>

	using namespace std;

	class Rectangle {
		const int length;
		const int breadth;
		public:
			Rectangle( int l, int b ) : length(l), breadth(b) {	// initialization list syntax
			}
			int printArea() {
				return length * breadth;
			}
	};

	int main() {
		Rectangle rt( 7, 4 );
		cout << rt.printArea() << endl;
		return 0;
	}
	```
- See __"Constructor in sub-classes"__ -> _"Calling parent-class parameterized constructor"_ paragraph

### Inheritance
C++ supports all standard types of inheritance (single, multilevel, hierarchical, etc) with the definition of parent-classes and sub-classes.<br>
When a __sub-class__ extends a parent-class it __inherits all data and function members (if not private) of the parent class__. Obviously the parent-class cannot access the members of its sub-classes. Here is a simple inheritance example:
```c
// Ex.
#include <iostream>
using namespace std;

class Polygon {
	protected:
    	int width, height;
	public:
    	void setValues (int a, int b) {	// declaring and implementing member function
    		width=a;
    		height=b;
    	}
};

class Rectangle: public Polygon { // class extension syntax
	private:
  		int area;
  	public:
  		int getarea() {	// declaring and implementing member function
  			return width * height;
  		}
};
```
##### Constructor in sub-classes
- The constructor of the sub-class always calls the constructor of the parent-class, but actually there are 2 cases to distinct:
	- __Calling parent-class constructor with no parameters__: in this case even if no explicit call is present in the sub-class constructor, the parent-class constructor gets always called by the compiler
	```c
	// Ex.
	#include <iostream>

	using namespace std;

	class A 	{
		public:
			A() {
				cout << "Constructor of A" << endl;
			}
	};

	class B : public A {	// B extends A
		public:
			B() {
				cout << "Constructor of B" << endl;
			}
	};

	int main() {
		B b;	// prints: "Constructor of A" "Constructor of B"
		return 0;
	}
	```
	- __Calling parent-class parameterized constructor__: parameterized parent class constructors are not called automatically while instantiating a child object. In order to call a parent-class parameterized constructor we need to use the __initialization list__ in the sub-class:
	```c
	#include <iostream>

	using namespace std;

	class Rectangle {
		int length;
		int breadth;
		public:
			Rectangle( int l, int b ) {	// parameterized parent-class constructor
				length = l;
				breadth = b;
			}
			int getArea() {
				return length * breadth;
			}
	};

	class Square : public Rectangle	{	// Square extends Rectangle
		public:
			Square(int a) : Rectangle( a, a ) {	// initialization list syntax, calling super constructor with the param passed to the child constuctor
			}
	};

	int main() {
		Square s(2);	// creating a Square with side=2, internally Square constructor calls Rectangle constructor
		int area;
		area = s.getArea();	// calling a parent function from the child object
		cout << "Area : " << area << endl;
		return 0;
	}
	```

##### Multiple Inheritance
Unlike in Java, in C++ a sub-class can extend more than one parent classes:
```c
// Ex.
#include <iostream>

using namespace std;

class Area {
	public:
		int getArea(int l, int b) {
			return l * b;
		}
};

class Perimeter {
	public:
		int getPerimeter(int l, int b) {
			return 2*(l + b);
		}
};

class Rectangle : public Area, public Perimeter {	// multiple inheritance syntax
	int length;
	int breadth;
	public:
		Rectangle() {
			length = 7;
			breadth = 4;
		}
		int area() {
			return Area::getArea(length, breadth);	// super calls need namespace to identify which of the parent-classes I'm calling
		}
		int perimeter() {
			return Perimeter::getPerimeter(length, breadth);	// super calls need namespace to identify which of the parent-classes I'm calling
		}
};

int main() {
	Rectangle rt;
	cout << "Area : " << rt.area() << endl;	// prints Area : 28
	cout << "Perimeter : " << rt.perimeter() << endl;	// prints Perimeter : 22
	return 0;
}
```

### Overloading and Overrriding

##### Overloading
1. Constructor Overloading
__Constructor overloading allows__ to have __multiple constructors__ in the same class but __with different arguments__.
	```c
	// Ex.
	#include <iostream>
	#include <string>
	using namespace std;
	class Student {
		string name;
		public:
			Student() {	// constructor 1
				name = "unknown";
			}
			Student( string n ) {	// constructor 2
				name = n;
			}
			void printName() {
				cout << name << endl;
			}
	};
	int main() {
		Student a( "xyz" );
		Student b;
		a.printName();	// prints xyz
		b.printName();	// prints unknown
		return 0;
	}
	```

2. Function Overloading
A function in a class can be overloaded by any number of other functions having __same name__ and __different arguments__:
	```c
	// Ex.
	#include <iostream>
	using namespace std;
	class Rectangle {
		public:
			void printArea(int x, int y) {
				cout << x * y << endl;
			}
			void printArea(double x, double y) {
				cout << x * x << endl;
			}
	};
	int main() {
		Rectangle rt;
		rt.printArea(2, 4);
		rt.printArea(1.7, 4.6);
		return 0;
	}
	```

##### Overriding
Overriding mechanism refers to a parent-class and sub-class situation where the sub-class redefines a parent function, changing its behavior. All child objects will recall the redefined version of the function (__Polymorphism__).
```c
#include <iostream>
using namespace std;
class Animals {
	public:
		void sayHi() {
			cout << "Hi, i'm an ANIMAL" << endl;
		}
};
class Dogs : public Animals {	// Dogs extends Animals
	public:
		void sayHi() {
			cout << "Hi, i'm a DOG" << endl;
		}
};
int main() {
	Dogs d;
	d.sayHi();	// prints "Hi, i'm a DOG"
	return 0;
}
```
Conditions for overriding are:
- Functions of both parent and child class must have the same name.
- Functions must have the same argument list and return type.
- A function declared static cannot be overridden.
- If a function cannot be inherited, it cannot be overridden.
- __Constructors cannot be overridden__.

### Abstact Classes and Interfaces
These kind of classes are based on the concept of __virtual functions__. A virtual function is __defined in a parent-class using _virtual_ keyword__ and then __implemented into sub-classes__.<br>
__Virtual functions declared empty (=0)__ in a parent-class are called __pure virtual functions__:
```c
virtual void functionName() = 0	// pure virtual function
```

##### Abstract Class
Is a __class that contains at least one pure virtual function and whose objects cannot be instantiated__. It is used as a parent-class to define other sub-classes whose object will be concretely instantiated. An abstract class can define __real data and function members__ too.
__Subclasses of an abstract base-class must define the abstract methods__, otherwise, they will also become abstract classes.  
```c
#include <iostream>
using namespace std;
class Animals {	// abstract class definition
	public:
		virtual void sound() = 0;	// pure virtual function
};
class Dogs : public Animals {	// Dogs is a concrete implementation of Animals
	public:
		void sound() {
			cout << "Woof" << endl;
		}
};
int main() {
	Dogs d;
	d.sound();
	return 0;
}
```
_note: when implementing a pure virtual function in a sub-class the compiler binds the function into the call at runtime (__late binding__), unlike in all standard functions definition where binding function calls with function bodies is done at compile time (__early binding__)._

##### Interface
Is an __abstract class in which all functions are pure virtual and there are no member variables__. When implementing an interface all pure virtual functions must be implemented in the sub-classes. Like in abstract classes, it's impossible to instantiate objects of an interface. __The naming for interfaces usually begins with a capital I__:
```c
#include <iostream>

using namespace std;

class IShape {	// IShape interface
	public:
		virtual int getArea() = 0;
		virtual int getPerimeter() = 0;
};

class Rectangle : public IShape {	// Rectangle implements IShape interface
	int length;
	int breadth;
	public:
		Rectangle(int l, int b)	{
			length = l;
			breadth = b;
		}
		int getArea() {
			return length * breadth;
		}
		int getPerimeter() {
			return 2*(length + breadth);
		}
};

int main() {
	Rectangle rt(7, 4);
	cout << "Rectangle :" << endl;
	cout << "Area : " << rt.getArea() << " Perimeter : " << rt.getPerimeter() << endl;
	return 0;
}
```

# DYNAMIC MEMORY ALLOCATION
Memory is divided in 2 main parts used differently by C++ programs:
- __stack__: memory from the stack is used by all the members which are declared inside functions. Note that main is also a function and this __is the normal memory used for most elements of C++ programs__.
- __heap__: memory from the heap is __commonly unused__ and __can be used to dynamically allocate the memory at runtime__, using __new__ and __delete__ operators.

### new and delete operators
In C _malloc_ and _free_ operators are used to reserve and cleanup a given block of memory. In C++ these legacy operators are still supported, but it's reccomended ti use their respective C++ counterparts for dynamic memory allocation:
- __new__ : reserves a contiguous memory block that is always accessible throughout the program (unlike the automatic memory which is available only inside the function or block where it's declared).<br>
This is the way of dynamically allocating a variable _data_:
	```c
	int *data = new int;	// dynamic allocation of a variable
	```
	_note that we use pointers to allocate memory dynamically._<br>
	This simple dynamic var declaration will allocate in memory the space of an integer for our var.


- __delete__: simply frees up dynamically allocated memory, so that it becomes available for future use. It's reccomended to delete a given allocation when finished using related data it.
	```c
	delete (data);
	```
	Once deleted, a pointer will point to deallocated memory and will be called a dangling pointer. If we further try to delete a dangling pointer, we will get some undefined behavior.

### Dynamic Allocation of Arrays
```c
char *arr = new char[length];
...
delete arr;

// Ex.
#include <iostream>
using namespace std;
int main() {
	int length, sum = 0;
	cout << "Enter the number of students in the group" << endl;
	cin >> length;
	int *marks = new int[length];	// marks dynamic array allocation
	cout << "Enter the marks of the students" << endl;
	for( int i = 0; i < length; i++ ) {
		cin >> *(marks+i);
	}
	for( int i = 0; i < length; i++ ) {
		sum += *(marks+i);
	}
	cout << "sum is " << sum << endl;
	delete[] marks;	// release memory allocated for marks
	return 0;
}
```

### Dynamic Allocation of Objects
While normally dealing with objects in the _stack_, memory is allocated _constructor_ and released by _destructor_ when objects go out of scope. The same thing can be done dynamically in the _heap_ using _pointers_ and _new_/_delete_ operators:
```c
#include <iostream>
using namespace std;
class A {
	 public:
       	A() {
    	  cout << "Constructor" << endl;
      	}
       	~A() {
    	   cout << "Destructor" << endl;
        }
};
int main() {
	A* a = new A;
	delete a; // Delete array
	return 0;
}
```
_note: the same can be done with array of objects using the dynamic array allocation syntax_

# TEMPLATES
In C++ templates are the instrument used for _generic programming_ or in other words programming independently from data types (similar to Java generics).<br>
##### Template Functions
Template functions can handle arguments of generic data-types. Note that even more than one generic data type can be used in case data-types are different from one argument to the other:
```c
template<class T> T functionName(T x, T y) {	// template function definition
	...
	return ...;
}
/*
 * note that the generic type T used in the declaration is just an identifier of a generic data-type.
 * It could have been every other identifier or even more than one identifier could be used in case
 * the class handles several generic arguments [Ex. template<class T1, class T2> T2 functionName(T1 x, T2 y) ].
 */

// Ex.
#include <iostream>
using namespace std;
template <typename T> T sum( T x, T y) {	// template function definition
    return x + y;
}
int main() {
	cout << "Sum : " << sum(3, 5) << endl;	// calling template function with int params
	cout << "Sum : " << sum(3.4, 5.2) << endl;	// calling template function with float params
	return 0;
}
```

##### Template Classes
Using templates we can define classes capable of handling different data-types:
```c
template<class T> class MyClass {	// template class definition
	...
};

// Ex.
#include <iostream>
using namespace std;
template <class T> class Student {	// template class definition
	T marks1;
	T marks2;
	public:
		Student( T m1, T m2 ) {
			marks1 = m1;
			marks2 = m2;
		}
		T totalMarks() {
			return marks1 + marks2;
		}
};
int main() {
	Student<int> s1 ( 45, 50 );		// creating a specialization of the template class with int params
	Student<float> s2 ( 47.5, 56.4 );	// creating a specialization of the template class with float params
	cout << "Total marks of student1 : " << s1.totalMarks() << endl;
	cout << "Total marks of student2 : " << s2.totalMarks() << endl;
	return 0;
}
```

# FILE IO
To deal with files input and output streams, the _fstream_ C++ standard library comes in handy.<br>
The lib exposes the following _data types_:

|Data type|Description|
|---------|--------------------------------------------------------------------|
|ofstream|It is used to create files and write on files.|
|ifstream|It is used to read from files.|
|fstream|It can perform the function of both ofstream and ifstream which means it can create files, write on files, and read from files.|

And the following _modes_ that can be used to specify the purpose we're opening the file for:

|Mode|Description|
|---------|--------------------------------------------------------------------|
|ios::app|opens a text file for appending. (appending means to add text at the end).|
|ios::ate|opens a file for output and move the read/write control to the end of the file.|
|ios::in|opens a text file for reading.|
|ios::out|opens a text file for writing.|
|ios::trunc|truncates the content before opening a file, if file exists.|

Here is a complete example of reading and writing on a file:
```c
#include <iostream>
#include <fstream>
using namespace std;
int main(){
  char text[200];
  fstream file;
  file.open ("example.txt", ios::out | ios::in );	// opening file in read and write mode
  cout << "Write text to be written on file." << endl;
  cin.getline(text, sizeof(text));	// acquiring text from user
  // Writing on file
  file << text << endl;	// writing text to file using << operator
  // Reding from file
  file >> text;		// reading from file using >> operator
  cout << text << endl;
  //closing the file
  file.close();		// always close opened files
  return 0;
}
```
