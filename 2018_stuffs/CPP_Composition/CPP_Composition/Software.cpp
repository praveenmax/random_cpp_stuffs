#include "stdafx.h"
#include "Software.h"
#include<iostream>
#include <string>

using namespace std;

Software::Software(string t_OS):OS(t_OS)
{

}

void Software::PrintSoftwareDetails()
{
	cout << endl << "Software Details:";
	cout << endl << "\tOS : " << this->OS;
	cout << endl;
}
Software::~Software()
{
}


