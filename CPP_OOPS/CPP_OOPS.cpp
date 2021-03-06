// CPP_OOPS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Employee.h"
#include "Programmer.h"
#include <iostream>

using namespace std;

int main()
{

	//Programmer class instance
	const char * max = "Max";
	const char * address = "Chennai, India";
	const char * langUsed = "Java";
	int empID = 5;
	int devID = 101;
	float salary = 2000;

	//Base class pointer
	Employee * emp;
	Programmer progOne(max, empID, address, salary, devID, langUsed);
	emp = &progOne;

	emp->PrintDetails();

	cout << " ********END OF MAIN**********" << endl;

	getchar();
    return 0;
}

