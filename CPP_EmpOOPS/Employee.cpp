#include "stdafx.h"
#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee()
{
	
}

Employee::Employee(char * name, int * empID, char * address, float * salary) {
	this->name = name;
	this->empID = empID;
	this->address = address;
	this->salary = salary;
}

void Employee::SetName(char * t_name)
{
	this->name = t_name;
}

char * Employee::GetName() {
	return this->name;
}

void Employee::SetSalary(float * t_salary) {
	this->salary = t_salary;
}

float * Employee::GetSalary() {
	return this->salary;
}

void Employee::SetEmpID(int * t_empID) {
	this->empID - t_empID;
}

int * Employee::getEmpID() {
	return this->empID;
}

void Employee::SetAddress(char * t_address) {
	this->address = t_address;
}

char * Employee::GetAddress() {
	return this->address;
}

Employee::~Employee() {
	cout << "Employee object " << this->name << "destroyed." << endl;
}

