#pragma once
#include <iostream>
using namespace std;
class Vehicle
{
public:
	//virtual void run();  
	//��Ӧ��
	/*Vehicle v;
	v.run(); */
	/*virtual void run() = 0;  //�麯��������0�Ժ���Ǵ��麯����������û�ж��塣��������һ�����麯���Ժ�Ͳ����ٴ���ʵ������Ӧ��Main.cpp��   ���������������࣬��Ӱ�춨��ָ�룬�����������ʵ��
	//Vehicle v;
	//v.run();*/
	virtual void run() = 0;
	virtual ~Vehicle()      //�������������������Ҫ��������������������  ����������
	{
		cout << "Vehicle is destroyed!" << endl;
	};
	   
};
