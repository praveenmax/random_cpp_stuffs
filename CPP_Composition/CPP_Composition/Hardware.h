#pragma once
#include <string>
using namespace std;

class Hardware
{
private:
	string coreType;
public:
	Hardware(string t_coreType);
	~Hardware();
	void PrintHWDetails();

};

