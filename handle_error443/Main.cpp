//�׳��쳣�ܹ����û��ṩ���Ѻõ�һ�棬��������������ŵ���Ϣ��ﴦ�� 
#include<iostream>
#include<windows.h>
#include<cmath>  //��ѧ��ʽ

using namespace std;

int main()
{
	double triangle(double,double,double);
	double a, b, c;
	cin >> a >> b >> c;
	try     //��Ҫ�߼���Ҳ���ܻ��׳��쳣��λ��
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
	if (a + b <= c || b + c <= a || a + c <= b)throw 3.14;   //throw����ֻҪ��double�͵Ķ���Ӱ������b,c,3.14���ǿ��е�
	return sqrt(s*(s - a)*(s - b)*(s - c));
}


