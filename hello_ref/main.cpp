#include<iostream>

using namespace std;

int main()
{
	int i = 100;
	int &r = i;     //引用类型
	cout << r << endl;
	r = 200;
	cout << i << endl;
	int k = 99;
	r = k;
	cout << r << endl;


	cin.get();
	cin.get();
}
