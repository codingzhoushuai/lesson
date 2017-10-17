#include <iostream>

using namespace std;

int main()
{
	int i, j, m, n;
	i = 8;
	j = 10;
	m = ++i + j++;     //二目运算符级别高于一目运算，本题中++i和（++i）是一样的
	n = (++i) + (++j) + m;
	cout << i << '\t' << j << '\t' << m << '\t' << n << endl;  //连写两个\t,是"\t\t"
	cin.get();
	cin.get();
	return 0;
}