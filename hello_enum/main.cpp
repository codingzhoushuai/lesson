#include<iostream>

using namespace std;

enum Color 
	{ RED,GREEN,BLUE,YELLOW,PURPLE };



int main()
{
	Color c = RED;      //ö�ٶ�Ӧ����ֵ���˴�����0,1,2,3,4
	cout << c << endl;

	c = (Color)0;  //cд�� ǿ������ת��
	c = Color(0);  //c++д��
	c = Color(50);
	cout << c << endl;

	int i = c;
	cout << i << endl;

	cin.get();
	cin.get();
}