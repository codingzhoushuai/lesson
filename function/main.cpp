#include <iostream>

using namespace std;

void f();
double g(int i, double d);  
double g(double i, int d);
double g(int i);     //�����Ƴ�

int main()
{
	//f();                                 //i=g(10)
	cout << g(1,1.23)<<endl;  
	cout << g(1.23, 1) << endl;            //i  (Ĭ�ϲ�������)
	cout << g(10) << endl;
                                         //int i=10;cout<<g(i)<<endl;��ͬ��g��10�� 
	cin.get();
	cin.get();
}

void f()
{
	cout << "hello function" << endl;
}

double g(int i, double d)               //double��int��������������������
{
	//return i * 2;                     //�β�
	return  i + d;
}

double g(double i, int d)               //double��int��������������������
{
	return  i - d;
}

double g(int i)               //��������
{
	return  i*3;
}


//������ͬ��ʱ������������ݱ����������жϵ��ú���
//����������������ͬ������ֵ���Ͳ�ͬ�����ܹ��ɺ������ء�ԭ�����£�������