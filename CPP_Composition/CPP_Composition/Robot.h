#pragma once
#include "Software.h"
#include "Hardware.h"

class Robot
{
private:
	Software software;
	Hardware hardware;
public:
	Robot(Software s, Hardware h);
	~Robot();
	void PrintRobotSpecs();
};

