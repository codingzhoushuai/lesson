#pragma once  //#pragma once��һ���Ƚϳ��õ�C/C++��ע��ֻҪ��ͷ�ļ����ʼ����������ע�����ܹ���֤ͷ�ļ�ֻ������һ�Ρ�
#include "animal.h"  //�Լ������ͷ�ļ�Ҫ��˫���ű��
#include "Dog.h"

void f()
{
	Animal a;   //a�Ƕ���    ����main��ʱ���Ƕ������е�
	a.set_name("Tom");
	a.set_age(8);
	a.set_height(112.3);
	a.show();
	Animal b;
	b.set_name("Jack");
	b.set_age(5);
	b.set_height(72.1);
	b.show();
}


int main() 
{
	Dog* d = new Dog("mark", 15 , 2.21 ,"wangwang" );
    
	d->show();
	delete d;
	cin.get();
	cin.get();
}
/*int main()
{
	f();

	Animal* c = new Animal("musk", 45, 1.85);   //new֮��Ҫ���������ڴ棬��main֮�п϶��ᱻ���ա�new�ǲ��������Ĺ��캯��
												//c->set_name("����è");
												//c->set_age(20);
												//c->set_height(112.3);
	c->show();
	c->set_name("Alice");
	c->set_age(46);
	c->show();
	delete c;    //�����ڴ档�����ͷ�һ���ڴ���ٴ��ͷ�

	Animal* d = new Animal("xing", 35, 1.66);
	d->show();
	d->set_name("Ben");
	d->set_age(36);
	d->set_height(-100);
	d->show();
	delete d;

	cin.get();
	cin.get();
} 
*/


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