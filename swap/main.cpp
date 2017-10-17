#include<iostream>

using namespace std;
//传值的传指针本质还是传值
void swap(int &a, int &b)      //&a引用a，引用传递
{
	int t;
	t = a;
    a = b;
	b = t;
}       

void swap(int* a, int* b)      //指针
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	int m = 100;
	int n = 200;
	swap(&m, &n);              //重载函数
	cout << n << endl;

	swap(m, n);
	cout << n << endl;

	cin.get();
	cin.get();
}
