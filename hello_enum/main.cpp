#include<iostream>

using namespace std;

enum Color 
	{ RED,GREEN,BLUE,YELLOW,PURPLE };



int main()
{
	Color c = RED;      //枚举对应的是值，此处依次0,1,2,3,4
	cout << c << endl;

	c = (Color)0;  //c写法 强制类型转化
	c = Color(0);  //c++写法
	c = Color(50);
	cout << c << endl;

	int i = c;
	cout << i << endl;

	cin.get();
	cin.get();
}