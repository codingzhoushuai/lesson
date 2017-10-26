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
	cout << this->get_name() << " is constructed.(Dog)" << endl;    //��main.cpp��Dog d("mark", 15 , 2.21 ,"wangwang" );����
}

Dog::~Dog()
{
	cout << this->get_name() << " is destroyed.(Dog)" << endl;
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
{   //���������˽�����ԾͲ��������������б�����
	//cout << this->get_name() << " " << this->get_age() << " " <<  this->get_height()  << endl;
	Animal::show();
	cout << voice << endl;
}