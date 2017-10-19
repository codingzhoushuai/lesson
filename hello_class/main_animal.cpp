#pragma once
#include "animal.h"

Animal::Animal()
{
	name = "hai";
	age = 9;
	height = 2.31;
}
Animal::Animal(string name, int age, double height)
{
	this->name = name;
	this->age = age;
	this->height = height;
}

void Animal::set_name(string name)
{
	this->name = name; //右边name是传过来的参数,左边是成员
}
string Animal::get_name()
{
	return this->name;
}
void Animal::set_age(int age)
{
	this->age = age;
}
int Animal::get_age()
{
	return this->age;
}
void Animal::set_height(double height)
{
	//this->height = height;
	if (height>0)
	{
		this->height = height;   //用以校验数据是受控制的，限制不合理的赋值
	}
}
double Animal::get_height()
{
	return this->height;
}
void Animal::show()
{
	cout << name << " " << age << " " << height << " " << endl;
}