#pragma once
#include "Vehicle.h"

class Plane :public Vehicle
{
public:
	Plane();
	~Plane();
	Plane(string name, string swing);
	string get_swing();
	void run();
private:
	string swing;
};
