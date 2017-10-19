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

Animal::~Animal()    //Îö¹¹º¯Êý£¬¶ÔÓ¦×Åanimal¡£ÊÇÓÐdelete´¥·¢µÄ
{
	cout << name << " is destroyed" << endl;
}

void Animal::set_name(string name)
{
	this->name = name; //å³è¾¹nameæ˜¯ä¼ è¿‡æ¥çš„å‚æ•°,å·¦è¾¹æ˜¯æˆå‘˜
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
		this->height = height;   //ç”¨ä»¥æ ¡éªŒæ•°æ®æ˜¯å—æŽ§åˆ¶çš„ï¼Œé™åˆ¶ä¸åˆç†çš„èµ‹å€¼
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
