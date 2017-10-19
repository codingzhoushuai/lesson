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
	this->name = name; //鍙宠竟name鏄紶杩囨潵鐨勫弬鏁�,宸﹁竟鏄垚鍛�
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
		this->height = height;   //鐢ㄤ互鏍￠獙鏁版嵁鏄彈鎺у埗鐨勶紝闄愬埗涓嶅悎鐞嗙殑璧嬪��
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
