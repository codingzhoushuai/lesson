#include <iostream>

using namespace std;

int main()
{
	int i, j, m, n;
	i = 8;
	j = 10;
	m = ++i + j++;     //��Ŀ������������һĿ���㣬������++i�ͣ�++i����һ����
	n = (++i) + (++j) + m;
	cout << i << '\t' << j << '\t' << m << '\t' << n << endl;  //��д����\t,��"\t\t"
	cin.get();
	cin.get();
	return 0;
}