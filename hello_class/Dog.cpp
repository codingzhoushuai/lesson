#include "Dog.h"

void Dog::set_vioce(string voice)
{
	this->voice = voice;
}

string Dog::get_voice() 
{
	return  voice;
}

void Dog::show() 
{
	cout << this->get_name() << " " << this->get_age() << " " <<  this->get_height()  << endl;
	cout << voice << endl;
}