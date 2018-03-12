#pragma once
#include <string>
using namespace std;

class Software
{
private:
	string OS;
	
public:
	Software(string t_OS);
	~Software();
	void PrintSoftwareDetails();
};

