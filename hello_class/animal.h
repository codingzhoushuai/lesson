#pragma once      //保证头文件引入的只有一次儿不出错
#include <iostream>
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
	~Animal();  //析构函数，只有一个而且不带函数

	void set_name(string name);
	string get_name();
	void set_age(int age);
	int get_age();
	void set_height(double height);
	double get_height();
public:
	void show();
}; 
