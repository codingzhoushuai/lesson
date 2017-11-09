#pragma once
class Vehicle
{
public:
	/*virtual void run() = 0;  //虚函数，加上0以后就是纯虚函数——就是没有定义。类里面有一个纯虚函数以后就不能再创建实例。对应着Main.cpp中
	//Vehicle v;
	//v.run();*/
	virtual void run() = 0;
    //virtual void run();  
	//对应着
	/*Vehicle v;
	v.run(); */
};
