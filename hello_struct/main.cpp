#include <iostream>
#include<string>

using namespace std;

struct animal
{
	string name;
	int age;
};

int main() 
{
	animal a;             //�������  �ֲ���ջ�ڴ棺�ڴ���Զ��ͷ�  ���ڴ棺�ڴ���Ҫ�ֶ��ͷ�  
	a.name = "Tom";
	a.age  = 60;

	cout << a.name << " is " << a.age << " yearsold." << endl;

	animal* pa = new animal();
	pa->name = "Bill"; // (*pa).name = "Bill";
	pa->age = 18;   //(*pa).age = 18;

	cout << pa->name << " is " << pa->age << " yearsold." << endl;

	delete pa;
	/*�����н�������ǿ��Կ�����delete p1 �ڻ��տռ�Ĺ����У�ֻ�� p1[0] ����������������������
	���������� p1[1]��p1[2] �ȶ�û�е����������������������������֢�����ڡ������ delete[]��
	���ڻ��տռ�֮ǰ���ж��󶼻����ȵ����Լ��������������������͵Ķ���û������������
    ���Ի��ջ���������ɵ�����ռ��� delete �� delete[] ����Ӧ�ÿ��Եģ����Ƕ�����������飬
    ֻ���� delete[]������ new �ĵ�������ֻ���� delete ������ delete[] ���տռ䡣*/
	cin.get();
	cin.get();
	
}