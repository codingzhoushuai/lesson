#include<iostream>

using namespace std;

int main() 
{
	int* a[5];
	/*for (int i = 0;i < 5;i++) 
	{
		a[i] = i;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << endl;
	}*/

	int b = 1;
	int c = 2;
	int d = 3;
	int e = 4;
	int f = 5;

	a[0] = &b;
	a[1] = &c;
	a[2] = &d;
	a[3] = &e;
	a[4] = &f;

	for (int i = 0; i < 5; i++)
	{
		cout << * a[i] << endl;
	}

	int m[5];
	int n[5];
	int(*pm)[5];    //定义指向数组的指针变量
	pm = &m;        //数组的名字本身代表地址，这里相当于取了两次地址
	//pm = &n;
	for (int i = 0; i < 5; i++)
	{
		m[i] = i * 10;
		cout << m[i] << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << pm[i] << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << (*pm)[i] << endl;
	}
	cin.get();
	cin.get();
}