#include "stdafx.h"
#include "Hardware.h"
#include<iostream>
#include <string>

using namespace std;

Hardware::Hardware(string t_coreType):coreType(t_coreType)
{

}


Hardware::~Hardware()
{
}

void Hardware::PrintHWDetails()
{
	cout << endl << "Hardware Details:";
	cout << endl << "\tCore Type : " << this->coreType;
	cout << endl;
}
