#include "stdafx.h"
#include "Programmer.h"
#include <iostream>

using namespace std;

void Programmer::SetDevID(int * t_devID) {
	this->devID = t_devID;
}

int * Programmer::GetDevID() {
	return this->devID;
}

void Programmer::SetLanguageUsed(char * t_languageUsed) {
	this->languageUsed = t_languageUsed;
}

char * Programmer::GetLanguageUsed() {
	return this->languageUsed;
}