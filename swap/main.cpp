#include<iostream>

using namespace std;
//��ֵ�Ĵ�ָ�뱾�ʻ��Ǵ�ֵ
void swap(int &a, int &b)      //&a����a�����ô���
{
	int t;
	t = a;
    a = b;
	b = t;
}       

void swap(int* a, int* b)      //ָ��
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	int m = 100;
	int n = 200;
	swap(&m, &n);              //���غ���
	cout << n << endl;

	swap(m, n);
	cout << n << endl;

	cin.get();
	cin.get();
}
