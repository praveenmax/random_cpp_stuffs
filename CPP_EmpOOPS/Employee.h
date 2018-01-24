#pragma once
class Employee
{
	protected:
		char * name;
		int * empID;
		char * address;
		float * salary;


	public:
		Employee();
		Employee(char *name, int * empID, char * address, float * salary);
		~Employee();
		void SetName(char * t_name);
		char * GetName();
		void SetSalary(float * t_salary);
		float * GetSalary();
		int * getEmpID();
		void SetEmpID(int * t_empID);
		char *GetAddress();
		void SetAddress(char * t_address);
};

