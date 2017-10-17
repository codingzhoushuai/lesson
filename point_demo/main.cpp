#include<iostream>

using namespace std;

int main()
{
	int i = 100;
	int k = 200;   //int& ra = a; 声明一个引用，名字是ra，ra引用了a （引用简单地说就是：对ra的操作如同对a的操作）
	void* v;     //void 空指针类型
	v = &k;  //取到i的地址给v指针      可以把指针直接给void指针类型，不允许void指针类型访问其他指针
	double d=3.14;
	cout << *(int* )v << endl;

	v = &d;  
	cout << *(double*)v << endl;       //void可以临时存放任何一种指针类型   不正确的转换类型如int就会产生垃圾值
 


	cin.get();
	cin.get();
}
