//抛出异常能够给用户提供更友好的一面，出现问题后用优雅的信息表达处理 
#include<iostream>
#include<windows.h>
#include<cmath>  //数学公式

using namespace std;

int main()
{
	double triangle(double,double,double);
	double a, b, c;
	cin >> a >> b >> c;
	try     //主要逻辑，也可能会抛出异常的位置
	{
		while (a > 0 && b > 0 && c > 0)
		{
			cout << triangle(a, b, c) << endl;
			cin >> a >> b >> c;
		}
	}
	catch (double)
	{
		cout << "a = " << a << "b = " << b << "c = " << c << ",this is not a triangle" << endl;
	}
	cout << "end" << endl;

	Sleep(5000);
}
double triangle(double a, double b, double c)
{
	double s = (a + b + c) / 2;
	if (a + b <= c || b + c <= a || a + c <= b)throw 3.14;   //throw后面只要是double型的都不影响运行b,c,3.14都是可行的
	return sqrt(s*(s - a)*(s - b)*(s - c));
}


