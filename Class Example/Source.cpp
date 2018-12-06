#include "Robot.h"
#include <string>
#include <iostream>
using namespace std;

void main()
{
	//create a robot //creating an object // instance of class
	Robot robot1;
	robot1.name = "C3P0";
	robot1.setNumberOfArms(2);
	//creating another robot
	Robot robot2;
	robot2.name = "R2D2";
	robot2.setNumberOfArms(3);
	// letting user know what was created
	cout << "I have created a new robot whose name is " << robot1.name << ". This robot has " << robot1.getNumberOfArms() << " arms." << endl;
	cout << "I have created a new robot whose name is " << robot2.name << ". This robot has " << robot2.getNumberOfArms() << " arms." << endl;
	//robots talk
	robot1.talk("Where is Master Luke?");
	robot2.talk("Beep boop beep droo?");
	system("pause");
}