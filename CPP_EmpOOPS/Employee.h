#pragma once
class Employee
{
	private:
		const char * name;
		int  empID;
		const char * address;
		float  salary;


	public:
		Employee(const char *name, int  empID, const char * address, float  salary);
		~Employee();
		void SetName(const char * t_name);
		const char * GetName();
		void SetSalary(float  t_salary);
		float  GetSalary();
		int  getEmpID();
		void SetEmpID(int  t_empID);
		const char *GetAddress();
		void SetAddress(const char * t_address);
		virtual void PrintDetails();//virtual for Late-Binding
};
/*
POINTS:
	Initializer list
	Base class default constructor is always called irresp of child class's non-def constructor.(can be overriden by init-list)
	Virtual Functions(For Late-Binding)
	Pure Virtual Functions
	const char (For assigning like this :  const char * name="max"; )
	Use 'public' access when inheriting. So, pointer type conversion from Derived to Base is made possible
	Need to alloc and free char variables instead of const char.Also free via destructor
	Need to re-compile with strict compilation




*/
