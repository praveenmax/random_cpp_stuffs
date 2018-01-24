#pragma once

#include "Employee.h"

 class Programmer : Employee
{
	private:
		int * devID;
		char * languageUsed;

	public:
		void SetDevID(int * t_devID);
		int * GetDevID();
		void SetLanguageUsed(char * t_langUsed);
		char * GetLanguageUsed();
};