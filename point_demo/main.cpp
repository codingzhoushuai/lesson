#include<iostream>

using namespace std;

int main()
{
	int i = 100;
	int k = 200;   //int& ra = a; ����һ�����ã�������ra��ra������a �����ü򵥵�˵���ǣ���ra�Ĳ�����ͬ��a�Ĳ�����
	void* v;     //void ��ָ������
	v = &k;  //ȡ��i�ĵ�ַ��vָ��      ���԰�ָ��ֱ�Ӹ�voidָ�����ͣ�������voidָ�����ͷ�������ָ��
	double d=3.14;
	cout << *(int* )v << endl;

	v = &d;  
	cout << *(double*)v << endl;       //void������ʱ����κ�һ��ָ������   ����ȷ��ת��������int�ͻ��������ֵ
 


	cin.get();
	cin.get();
}
