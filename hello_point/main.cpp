#include<iostream>

using namespace std;

int main()
{

	int i = 100;
	int* p = &i;                  //*����int������ͻ�����͡�һ��ָ�������Ҫһ��ָ��*   ��i�ĵ�ַ&i��ֵ��P
	cout << i << endl;
	cout << * p << endl;          //*pָ�����ָ�����i
	cout << p << endl;            //p��ŵ���i�ĵ�ַ
	i= 99;
	cout << *p << endl;           //ָ�����pָ���ڴ棬�����������ݡ�p���������i���ڴ��ַ


	int** pp = &p;
	cout << p << endl;            //pp��ŵ���p�ĵ�ַ
	cout << *pp << endl;
	
	int*** ppp = &pp;
	cout << pp << endl;
	cout << *ppp << endl;

	* p = 88;
	cout << i << endl;

	** pp = 77;
	cout << i << endl;

	int m = 8;
	p = &m;
	cout << *p << endl;
	
	//double d = 3.14;
	//p = &d;     ָ�����ͱ��������޸�
	//*ppp����ֱ��ָ��*p����Ϊ*ppδ��ʼ����ָ�룬ϵͳ���������һ��������ַ����ָ�룬����Ұָ�롣�������ڴ�й©����ɶδ���

	int x = 80;
	int* const px = &x;
	//px = 85;   //�ᱨ�� const���ε�����������ָ�����ͣ������͵ı���������ֵ�ǲ��ܱ����µġ�
	cout << * px << endl;
	//const int* ip;    // ip is a pointer to const int
	//int const* ip;    // ip is a pointer to int const
	//int* const ip;    // ip is a const pointer to int


	cin.get();
	cin.get();
}
