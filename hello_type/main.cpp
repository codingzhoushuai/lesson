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

	cout << sizeof(i) << endl;  //�鿴��ռ�ֽ�
	cout << sizeof(d) << endl;
	cout << sizeof(c) << endl;
	cout << sizeof(b) << endl;

	const int CI = 99;  //�����ͱ��������Ͷ����ֵ���ܱ�����
	const double CD = 5.32;
	const char CC = 'az';
	const bool CB = "flase";

	cout << CI << endl;
	cout << CD << endl;
	cout << CC << endl;
	cout << CB << endl;

	cout << PI << endl;  //defineʵ�ֱ����ĸ���

	cout << i + CI << endl;
	cout << i - CI << endl; 
	cout << i * CI << endl; 
	cout << i / CI << endl; 
	cout << i % CI << endl; 
	cout << double(i/CI) << endl;  //ǿ������ת��
	cout << i / 99.0 << endl;

	i = i + CI;
	cout << i  << endl;
	i += CI;
	cout << i << endl;
	i += 1;           //a=a+1 �ȼ� a+ =1
	cout << i << endl;
	i++;
	cout << i << endl;

	int n = i++;
	cout << n << endl;  //��ʹ��iֵ
	int m = ++i;      //��ִ��i=i+1
	cout << m << endl;


	cin.get();
	cin.get();

	return 0;
}

