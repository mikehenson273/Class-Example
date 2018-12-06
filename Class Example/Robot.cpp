#include "Robot.h"
#include <string>
#include <iostream>
using namespace std;

Robot:: Robot()
{	
}

void Robot::talk(string whatToSay)
{
	cout << "The robot named " << name << " says " << whatToSay << endl;
}

void Robot::setNumberOfArms(int numberOfArms)
{
	// x = 2;
	arms = numberOfArms;
}

int Robot::getNumberOfArms()
{
	return arms;
}

Robot::~Robot()
{
}