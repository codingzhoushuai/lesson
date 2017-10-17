#include <iostream>
#define PI 3.14

using namespace std;

int main()
{
	int i;
	double d;
	char c;
	bool b;

	i = 98;
	d = 3.14;
	c = 'a';
	b = true;

	cout << i << endl;
	cout << d << endl;
	cout << 'c' << endl;
	cout << b << endl;

	cout << sizeof(i) << endl;  //查看所占字节
	cout << sizeof(d) << endl;
	cout << sizeof(c) << endl;
	cout << sizeof(b) << endl;

	const int CI = 99;  //常类型变量变量和对象的值不能被更新
	const double CD = 5.32;
	const char CC = 'az';
	const bool CB = "flase";

	cout << CI << endl;
	cout << CD << endl;
	cout << CC << endl;
	cout << CB << endl;

	cout << PI << endl;  //define实现变量的复用

	cout << i + CI << endl;
	cout << i - CI << endl; 
	cout << i * CI << endl; 
	cout << i / CI << endl; 
	cout << i % CI << endl; 
	cout << double(i/CI) << endl;  //强制类型转换
	cout << i / 99.0 << endl;

	i = i + CI;
	cout << i  << endl;
	i += CI;
	cout << i << endl;
	i += 1;           //a=a+1 等价 a+ =1
	cout << i << endl;
	i++;
	cout << i << endl;

	int n = i++;
	cout << n << endl;  //先使用i值
	int m = ++i;      //先执行i=i+1
	cout << m << endl;


	cin.get();
	cin.get();

	return 0;
}

