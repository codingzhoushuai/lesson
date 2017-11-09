#pragma once
#include "Vehicle.h"
#include <iostream>
using namespace std;
class Car :public Vehicle
{
public:
	virtual void run();
	~Car()
	{
		cout << "Car is destroyed!" << endl;
	};

};