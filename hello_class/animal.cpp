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

Animal::~Animal()    //析构函数，对应着animal。是有delete触发的
{
	cout << name << " is destroyed" << endl;
}

void Animal::set_name(string name)
{
	this->name = name;   //将参数name的值赋值给 本对象的成员变量name
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
		this->height = height;   
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
