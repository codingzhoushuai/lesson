#include<iostream>
// #include<stdlib.h>  system("pause");  ����ʹ�÷�ֹ����̨����
// #include<windows.h> Sleep("5000");    ����ʹ�÷�ֹ����̨����
using namespace std;

namespace Computer
{
	int i;
	void f()
	{
		cout << "Computer ::f " << endl;
	}
}

namespace Information
{
	int i;
	void f()
	{
		cout << "Informationr ::f " << endl;
	}
}

/*using namespace Computer;*/
using Computer::i;
using Computer::f;  //usingָ�����������ö�����     �͵�38�ж�Ӧ�����ɿ���ʹ�ó�����

//using namespace Information;   //����using namespace Information;�����ռ���ͻ
int main() 
{
	auto i = 100;
	auto d = 3.14;
	auto s = "hello";
	cout << d << endl;
	cout << i*100 << endl;
    //auto k;  ����û�и�ֵ�޷��Ƶ�


	/*//Computer::i = 100;
	i = 100;
	cout << i << endl;
	//cout << Computer::i << endl;
	Information::i=200;
	
	f();
	Information::f();
	Computer::f();*/


	cin.get();
	cin.get();
}