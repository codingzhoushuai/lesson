#pragma once
#include "Animal.h"

class Dog : public Animal   //����������,û��private��Ĭ����public
{
private:
	string voice;
public:
	void set_vioce(string voice);
	string get_voice();
public:
	void show();
};