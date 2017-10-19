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
	this->name = name; //�ұ�name�Ǵ������Ĳ���,����ǳ�Ա
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
*/

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


	Animal* c = new Animal("musk", 45, 1.85);   //new֮��Ҫ���������ڴ棬��main֮�п϶��ᱻ���ա�new�ǲ��������Ĺ��캯��
												/*c->set_name("����è");
												c->set_age(20);
												c->set_height(112.3);*/
	c->show();
	c->set_name("Alice");
	c->set_age(46);
	c->show();
	delete c;    //�����ڴ档�����ͷ�һ���ڴ���ٴ��ͷ�

	Animal* d = new Animal("xing", 35, 1.66);
	d->show();
	c->set_name("Ben");
	d->set_age(36);
	d->show();
	delete c;

	cin.get();
	cin.get();
}