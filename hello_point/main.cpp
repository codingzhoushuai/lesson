#include<iostream>

using namespace std;

int main()
{

	int i = 100;
	int* p = &i;                  //*跟在int后面能突出类型。一个指针变量需要一个指针*   把i的地址&i赋值给P
	cout << i << endl;
	cout << * p << endl;          //*p指针变量指向变量i
	cout << p << endl;            //p存放的是i的地址
	i= 99;
	cout << *p << endl;           //指针变量p指向内存，访问它的内容。p所保存的是i的内存地址


	int** pp = &p;
	cout << p << endl;            //pp存放的是p的地址
	cout << *pp << endl;
	
	int*** ppp = &pp;
	cout << pp << endl;
	cout << *ppp << endl;

	* p = 88;
	cout << i << endl;

	** pp = 77;
	cout << i << endl;

	int m = 8;
	p = &m;
	cout << *p << endl;
	
	//double d = 3.14;
	//p = &d;     指针类型被定不可修改
	//*ppp不能直接指向*p，因为*pp未初始化的指针，系统会随机分配一个垃圾地址给该指针，就是野指针。会引起内存泄漏，造成段错误。

	int x = 80;
	int* const px = &x;
	//px = 85;   //会报错 const修饰的数据类型是指常类型，常类型的变量或对象的值是不能被更新的。
	cout << * px << endl;
	//const int* ip;    // ip is a pointer to const int
	//int const* ip;    // ip is a pointer to int const
	//int* const ip;    // ip is a const pointer to int


	cin.get();
	cin.get();
}
