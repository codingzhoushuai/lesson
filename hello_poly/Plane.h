#pragma once
#include "Vehicle.h"
#include <iostream>
using namespace std;
class Plane :public Vehicle
{
public:
	virtual void run();
	~Plane()
	{
		cout << "Plane is destroyed!" << endl;
	}
};