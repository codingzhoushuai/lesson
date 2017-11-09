#pragma once
#include <iostream>
using namespace std;
class Vehicle
{
public:
	//virtual void run();  
	//对应着
	/*Vehicle v;
	v.run(); */
	/*virtual void run() = 0;  //虚函数，加上0以后就是纯虚函数——就是没有定义。类里面有一个纯虚函数以后就不能再创建实例。对应着Main.cpp中   可以派生出来子类，不影响定义指针，把派生类对象实现
	//Vehicle v;
	//v.run();*/
	virtual void run() = 0;
	virtual ~Vehicle()      //调用派生类的析构函数要求基类里的析构函数创建  虚析构函数
	{
		cout << "Vehicle is destroyed!" << endl;
	};
	   
};
