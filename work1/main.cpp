#include<iostream>

using namespace std;

int my_max(int a, int b)
{
	if (a > b)    //a>b:a,b
	{
		return a;
	}
	else
	{
		a = b;
		return a;
	}
}

int my_max(int a, int b, int c)
{
	int m = my_max(a, b);
	return my_max(m, c);
}

int my_max(int a, int b, int c,int d)
{
	int n = my_max(a, b, c);
	return my_max(n, d);
}
int main()
{
	int my_max(int a, int b);
	int my_max(int a, int b, int c);
	int my_max(int a, int b, int c, int d);
	
	cout << "请输入四个数字，为您求出最大值" << endl;
	int e, f, g, h;   //问题：任意多个的输入数怎么处理
	cin >> e;
	cin >> f;
	cin >> g;
	cin >> h;

	int a = 12, b = 9,c = 6,d = 9;
	
	cout << "您输入的四个数是:" << e <<'\t'<< f << '\t' << g << '\t' << h << '\t' <<"最大的值是:"<< my_max(e,f,g,h) << endl;
	cout << "my_max(9,9) = " << my_max(a, b) << endl;
	cout << "my_max(9,12,6) = " << my_max(a, b, c) << endl;
	cout << "my_max(9,12,6,9) = " << my_max(a, b, c, d) << endl;
	cout << "my_max(-1,-6,-5,-2) = " << my_max(-1, -6, -5, -2) << endl;
	

	cin.get();
	cin.get();
}