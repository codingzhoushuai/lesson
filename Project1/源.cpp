#include <iostream>

using namespace std;

int my_max(int a,int  b,int c)
{
	if (a > b&&b > c)
	{
		return a;
	}
	else
	{
		return c;
	}

}

int main()
{
	
	int i,j,k;
	cin >> i;
	cin >> j;
	cin >> k;

	cout << "�������������" << '\t' << i << '\t' << j << '\t' << k << '\t' << "���ֵ��"<<my_max(i,j,k)<<endl;

	cin.get();
	cin.get();
}