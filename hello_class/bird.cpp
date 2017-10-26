#pragma once
#include "Bird.h"

Bird::Bird()
{
}
Bird::Bird(string name, int age, double height, string color) :Animal(name, age, height)
//�����Ĺ��캯�����Ȼع��츸��Ĺ��캯�����ٹ����Լ��ġ����ٵ�ʱ�����������Լ��ģ������ٸ���ġ�
{
	this->color = color;
	cout << this->get_name() << " is constructed.(bird)" << endl;    //��main.cpp��Dog d("mark", 15 , 2.21 ,"wangwang" );����
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