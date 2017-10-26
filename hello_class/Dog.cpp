#pragma once
#include "Dog.h"

Dog::Dog() 
{
}
Dog::Dog(string name, int age, double height, string voice)
{
	this->set_name(name);
	this->set_age(age);
	this->set_height(height);
	this->voice = voice;
}

void Dog::set_vioce(string voice)
{
	this->voice = voice;
}

string Dog::get_voice() 
{
	return  voice;
}

void Dog::show() 
{   //父类里面的私有属性就不会在其他的类中被调用
	//cout << this->get_name() << " " << this->get_age() << " " <<  this->get_height()  << endl;
	Animal::show();
	cout << voice << endl;
}