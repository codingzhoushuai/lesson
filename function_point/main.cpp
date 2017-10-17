#include<iostream>

using namespace std;

int(*pf)(int, int); //pf是函数指针



int my_max(int a, int b)   
{
	if (a > b)
		return a;
	else
		return b;
}

int my_min(int a, int b)
{
	if (a < b)
		return a;
	else
		return b;
}


int main()
{
	cout << my_max(1, 2) << endl;
	cout << my_max(4, 2) << endl;
	
	pf = my_max;
	cout << (pf)(10, 20) << endl;
	cout << (*pf)(10, 20) << endl;
	cout << pf(10, 20) << endl;  //简写
	int* (* pfunc) (int*, double*** (*pi)[10]);   //整体是函数指针变量的定义，指向一个int指针，double数组指针（且拥有十个元素）

	cin.get();
	cin.get();
}


