#include "stdafx.h"
#include "Employee.h"
#include <iostream>
using namespace std;

 Employee::Employee(const char * name, int  empID, const char * address, float  salary) {
	this->name = name;
	this->empID = empID;
	this->address = address;
	this->salary = salary;

	cout << "\t  -Employee values are initialized" << endl;
}

void Employee::SetName(const char * t_name)
{
	this->name = t_name;
}

const char * Employee::GetName() {
	return this->name;
}

void Employee::SetSalary(float t_salary) {
	this->salary = t_salary;
}

float Employee::GetSalary() {
	return this->salary;
}

void Employee::SetEmpID(int t_empID) {
	this->empID = t_empID;
}

int Employee::getEmpID() {
	return this->empID;
}

void Employee::SetAddress(const char * t_address) {
	this->address = t_address;
}

const char * Employee::GetAddress() {
	return this->address;
}

Employee::~Employee() {
	cout << "Employee object " << this->name << " destroyed." << endl;
}


void Employee::PrintDetails() {
	cout<< "Details are : " << endl;
	cout<< "===[FROM EMPLOYEE CLASS]====" << endl;
	cout << "Name    : "<<this->name << endl;
	cout << "EmpID   : " << this->empID << endl;
	cout << "Address : " << this->address << endl;
	cout << "Salary  : " << this->salary << endl;
	cout << "-----------------------" << endl;
}


