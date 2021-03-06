#pragma once  //#pragma once是一个比较常用的C/C++杂注，只要在头文件的最开始加入这条杂注，就能够保证头文件只被编译一次。
#include "animal.h"  //自己定义的头文件要用双引号标记
#include "Dog.h"
#include "bird.h"

void show_animal(Animal* a)
{
	a->show();
}
void show_animal(Animal& a)
{
	a.show();
}

 
int main() 
{

	/*Dog* c = new Dog("bill", 10, 123.456," wangwang");
	show_animal(c);
	delete c;

	Bird* f = new Bird("jack", 10, 12.3, " 长而宽");
	show_animal(f);
	delete f;*/

	Dog d("abc", 5, 3.14, " wangwang");          //全局函数，接受Animal指针函数；
	show_animal(d);                              //从基类继承而来的派生类，实际上是在自身的构造函数中显示的调用基类的构造函数，然后复制基类的构造函数的内容，之后，可以在自己的类中添加一些其他的操作，而对于自己本身的函数成员，在本模块内有效，声明为静态函数，这样就可以避免命名的冲突问题。

	//Animal* d = new Dog("mark", 15 , 2.21 ,"wangwang" );  //这里的Animal和Dog的运行效果是不一样的
	//d->show();
	//delete d;

	/*Bird* c = new Bird("click", 15 , 2.21 ,"white" );
	c->show();
	delete c;*/

	cin.get();
	cin.get();
}






//void f()
//{
//	Animal a;   //a是对象    放在main的时候是堆上运行的
//	a.set_name("Tom");
//	a.set_age(8);
//	a.set_height(112.3);
//	a.show();
//	Animal b;
//	b.set_name("Jack");
//	b.set_age(5);
//	b.set_height(72.1);
//	b.show();
//}

/*int main()
{
	f();

	Animal* c = new Animal("musk", 45, 1.85);   //new之后要主动回收内存，在main之中肯定会被回收。new是不带参数的构造函数
												//c->set_name("机器猫");
												//c->set_age(20);
												//c->set_height(112.3);
	c->show();
	c->set_name("Alice");
	c->set_age(46);
	c->show();
	delete c;    //回收内存。不能释放一次内存后再次释放

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