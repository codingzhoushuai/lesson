#include<iostream>

using namespace std;

int(*pf)(int, int); //pf�Ǻ���ָ��



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
	cout << pf(10, 20) << endl;  //��д
	int* (* pfunc) (int*, double*** (*pi)[10]);   //�����Ǻ���ָ������Ķ��壬ָ��һ��intָ�룬double����ָ�루��ӵ��ʮ��Ԫ�أ�

	cin.get();
	cin.get();
}


