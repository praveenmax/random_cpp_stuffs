// CPP_Composition.cpp : Defines the entry point for the console application.
//
/*
	Composition is the technique to using classes as datatypes. In this, each class
	performs a single , well-defined task. Thus, complex real-world models can
	be broke down into multiple classes for clarity.

*/
#include <iostream>
#include "stdafx.h"
#include "Robot.h"
#include "Software.h"
#include "Hardware.h"

using namespace std;

int main()
{	
	Software s("Linux");
	Hardware h("ARM");
	Robot robo1(s,h);
	robo1.PrintRobotSpecs();

    return 0;
}

