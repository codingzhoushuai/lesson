#pragma once
#include "Animal.h"

class Dog : public Animal   //公共派生类,没有private，默认是public
{
private:
	string voice;
public:
	Dog();
	Dog(string name, int age, double height, string voice);
	~Dog();
public:
	void set_vioce(string voice);
	string get_voice();
public:
	void show();
};