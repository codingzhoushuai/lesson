#pragma once
#include "Bird.h"

Bird::Bird()
{
}
Bird::Bird(string name, int age, double height, string color) :Animal(name, age, height)
//真正的构造函数，先回构造父类的构造函数，再构造自己的。销毁的时候是先销毁自己的，再销毁父类的。
{
	this->color = color;
	cout << this->get_name() << " is constructed.(bird)" << endl;    //被main.cpp中Dog d("mark", 15 , 2.21 ,"wangwang" );调用
}

Bird::~Bird()
{
	cout << this->get_name() << " is destroyed.(bird)" << endl;
}


void Bird::set_color(string color)
{
	this->color = color;
}

string Bird::get_color()
{
	return  color;
}

void Bird::show()
{
	cout << this->get_name() << " " << this->get_age() << " " <<  this->get_height()  << endl;
	cout << color << endl;
}