// CPP_ExceptionHandling.cpp : Defines the entry point for the console application.
//
/*
To show the usage of User - defined exceptions.



Notes on exception handling:
=======================
	Exceptions can be handled by
		1. Creating your own class for throwing.
		2. Using the existing std::exception classes
		3. Creating a child class using std::exception.

	Must use & (reference) in catch() to prevent object cloning by the compiler

	Dont use basic datatype in catch(). Its very ambiguous.

	Arrange catch() in order of more specific to generalized exceptions.

*/
#include <iostream>
#include <string>
using namespace std;

class WrongPowerUpException : public exception {
private:
	string cause;
public:
	WrongPowerUpException(string t_cause):cause(t_cause)
	{
	}

	//a public method overridden from the std:exception class
	const char * what() {

		//return A pointer to the c-string representation of the string object's value.
		return cause.c_str();
	}

};

class MortalKombat {
	protected:
		string characterName;
		string power;

	public:
		MortalKombat(string t_charName) {
			characterName = t_charName;
		}

		virtual void SetPower(string t_powerup) = 0;
};

class Scorpion : MortalKombat {

	public :
		Scorpion(string t_charName) :MortalKombat(t_charName) {
			cout << endl << "Created Scorpion";
		}

		void SetPower( string t_powerup)
		{
			if (t_powerup.compare("fire") == 0)
			{
				power = "fire";
				cout << endl << t_powerup << " added successfully to "<<characterName<<"!";
			}
			else
				throw WrongPowerUpException(t_powerup);
		}
};

class Subzero : MortalKombat {

	public:
		Subzero(string t_charName) :MortalKombat(t_charName) {
			cout << endl << "Created Subzero";
		}
		void SetPower(string t_powerup)
		{
			if (t_powerup.compare("ice") == 0)
				power = "ice";
			else
				throw WrongPowerUpException(t_powerup);
		}
};

int main()
{
	cout << "Mortal Kombat Handling Exercise !" << endl;

	Scorpion scorpion("Scorpion");
	Subzero subzero("SubZero");

	try {
		scorpion.SetPower("ice");
	}
	catch (WrongPowerUpException& wpe)//Must use & (reference) to prevent object cloning by the compiler
	{
		cerr << endl << "Error while assigning powerup "<<  wpe.what();
	}

	try {
		scorpion.SetPower("fire");
	}
	catch (WrongPowerUpException& wpe)//Must use & (reference) to prevent object cloning by the compiler
	{
		cerr << endl << "Error while assigning powerup = " << wpe.what();
	}


	cout << endl << endl;

    return 0;
}

