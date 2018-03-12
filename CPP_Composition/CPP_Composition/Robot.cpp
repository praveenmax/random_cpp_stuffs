#include "stdafx.h"
#include "Robot.h"
#include <iostream>

using namespace std;

Robot::Robot(Software s, Hardware h):software(s),hardware(h)
{
	cout << "Robot initialized" << endl;
}


Robot::~Robot()
{
}

//Calls the respective class's print statements
void Robot::PrintRobotSpecs() {
	cout << "Printing Robot Specs" << endl;
	cout << "---------------------" << endl;
	this->software.PrintSoftwareDetails();
	this->hardware.PrintHWDetails();
	cout <<endl<<endl<< "---------------------" << endl;
}
