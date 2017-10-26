#pragma once
#include "Animal.h"

class Bird : public Animal   //公共派生类,没有private，默认是public
{
private:
	string color;
public:
	Bird();
	Bird(string name, int age, double height,string color);
	~Bird();
public:
	void set_color(string color);
	string get_color();
public:
	void show();
};