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
	void set_name(string name)
	{
		this->name = name; //�ұ�name�Ǵ������Ĳ���,����ǳ�Ա		
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

int main()
{
	Animal a;   //a�Ƕ���
	a.set_name("Tom");
	a.set_age(8);
	a.set_height(112.3);
	a.show();
	Animal b;
	b.set_name("Jack");
	b.set_age(5);
	b.set_height(72.1);
	b.show();


	Animal* c = new Animal();   //new֮��Ҫ���������ڴ棬��main֮�п϶��ᱻ����
	c->set_name("����è");
	c->set_age(20);
	c->set_height(112.3);
	c->show();
	delete c;    //�����ڴ档�����ͷ�һ���ڴ���ٴ��ͷ�
	
	cin.get();
	cin.get();
}