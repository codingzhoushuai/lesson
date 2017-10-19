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


	Animal* c = new Animal("musk",45,1.85);   //new֮��Ҫ���������ڴ棬��main֮�п϶��ᱻ���ա�new�ǲ��������Ĺ��캯��
	/*c->set_name("����è");
	c->set_age(20);
	c->set_height(112.3);*/
	c->show();
	c->set_age(46);
	c->show();
	delete c;    //�����ڴ档�����ͷ�һ���ڴ���ٴ��ͷ�

	Animal* d = new Animal("xing", 45, 1.85);  
	d->show();
	
	cout << d->get_name() << endl;
	delete c;
	
	cin.get();
	cin.get();
}