#pragma once      //��֤ͷ�ļ������ֻ��һ�ζ�������
#include <iostream>
#include <string>
using namespace std;
class Animal
{
private:
	string name;  //���ǰ��ַ�����������ʱ����ֵ�Ķ���ʵ�壩��������string�������ǰ�������ʱ����Ҫ�ַ������ж���ķ�������������String
	int age;
	double height;
public:
	Animal();
	Animal(string name, int age, double height);
	~Animal();  //����������ֻ��һ�����Ҳ�������

	void set_name(string name);
	string get_name();
	void set_age(int age);
	int get_age();
	void set_height(double height);
	double get_height();
public:
	void show();
}; 
