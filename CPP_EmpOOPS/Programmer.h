#pragma once

#include "Employee.h"

 class Programmer : public Employee
{
	private:
		int  devID;
		const char * languageUsed;

	public:
		Programmer(const char * name, int empID, const char * address, float salary, int dev_id, const char * languageUsed);
		~Programmer();
		void SetDevID(int t_devID);
		int  GetDevID();
		void SetLanguageUsed(const char * t_langUsed);
		const char * GetLanguageUsed();
		void PrintDetails();
};