﻿#include <iostream>
#include <string>

using namespace std;

class Animal
{
private:
	string name;  //我们把字符串当作对象时（有值的对象实体），我们用string。而我们把它当类时（需要字符串类中定义的方法），我们用String
	int age;
	double height;
public:
	Animal();
	Animal(string name, int age, double height);
	void set_name(string name);
	string get_name();
	void set_age(int age);
	int get_age();
	void set_height(double height);
	double get_height();
public:
	void show();
};
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
	this->height = height;
}
double Animal::get_height()
{
	return this->height;
}
void Animal::show()
{
	cout << name << " " << age << " " << height << " " << endl;
}
/*private:
string name;  //我们把字符串当作对象时（有值的对象实体），我们用string。而我们把它当类时（需要字符串类中定义的方法），我们用String
int age;
double height;
public:
Animal()
{
name = "a";
age = 9;
height = 1.23;
}
Animal(string name,int age,double height)
{
this->name = name;
this->age = age;
this->height = height;
}
void set_name(string name)
{
this->name = name; //右边name是传过来的参数,左边是成员
}
string get_name()
{
return name;
}
void set_age(int age)
{
this->age = age;
}
int get_age()
{
return age;
}
void set_height(double height)
{
this->height = height;
}
int get_height()
{
return height;
}
public:
void show()
{
cout << name << " " << endl;
cout << age << " " << endl;
cout << height << " " << endl;
}
};
*/

int main()
{
	Animal a;   //a是对象
	a.set_name("Tom");
	a.set_age(8);
	a.set_height(112.3);
	a.show();
	Animal b;
	b.set_name("Jack");
	b.set_age(5);
	b.set_height(72.1);
	b.show();


	Animal* c = new Animal("musk", 45, 1.85);   //new之后要主动回收内存，在main之中肯定会被回收。new是不带参数的构造函数
												/*c->set_name("机器猫");
												c->set_age(20);
												c->set_height(112.3);*/
	c->show();
	c->set_name("Alice");
	c->set_age(46);
	c->show();
	delete c;    //回收内存。不能释放一次内存后再次释放

	Animal* d = new Animal("xing", 35, 1.66);
	d->show();
	c->set_name("Ben");
	d->set_age(36);
	d->show();
	delete c;

	cin.get();
	cin.get();
}
© 2017 GitHub, Inc.