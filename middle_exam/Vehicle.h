#pragma once
#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
public:
	Vehicle();
	Vehicle(string name);
	~Vehicle();
	string get_name();
	virtual void run();
private:
	string name;
};
