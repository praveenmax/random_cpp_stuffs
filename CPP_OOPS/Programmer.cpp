#include "stdafx.h"
#include "Programmer.h"
#include <iostream>

using namespace std;

/*
	Since there is no default constructor in Base class Employee,
	we are using initializer list to invoke the Base class constructor directly.
	And its efficient too.
*/
Programmer::Programmer(const char * name, int empID, const char * address,
						float salary, int dev_id, const char * languageUsed) : Employee(name, empID, address, salary)
{
	this->devID = dev_id;
	this->languageUsed = languageUsed;

	cout << "\t  -Programmer values are initialized" << endl;
}

void Programmer::SetDevID(int t_devID) {
	this->devID = t_devID;
}

int Programmer::GetDevID() {
	return this->devID;
}

void Programmer::SetLanguageUsed(const char * t_languageUsed) {
	this->languageUsed = t_languageUsed;
}

const char * Programmer::GetLanguageUsed() {
	return this->languageUsed;
}

void Programmer::PrintDetails() {
	Employee::PrintDetails();
	cout <<"=====[FROM PROGRAMMER CLASS]====="<< endl;
	cout << "Dev ID    : " << this->devID<<endl;
	cout << "Lang Used : " << this->languageUsed<<endl;
	cout << "================================="<<endl;
}


Programmer::~Programmer() {

}
