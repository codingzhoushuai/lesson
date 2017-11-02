#pragma once
#include "Vehicle.h"

class Car:public Vehicle
{
public:
	Car();
	~Car();
	Car(string name, string swheel);
	string get_swheel();
	void run();
private:
	string swheel;
};

