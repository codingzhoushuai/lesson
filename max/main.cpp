#include <iostream>
using namespace std;
//int max(int x, int y) 
//{
//
//	int z;
//		if (x > y)z = x;
//		else z = y;
//		return(z);
//}
//
//int main() 
//{
//	int a, b, m;
//	cin >> a >> b;
//	m = max(a, b);
//	cout << "max" << m << '\n';
//
//	cin.get();
//	system("pause");   //cin.get();两行也可以
//		
//}

int main()
{
	int max(int x, int y);         //对max函数作声明
	int a, b, c;
	cin >> a >> b;
	c = max(a, b);                   //调用max函数
	cout << "max=" << c << endl;
	cin.get();
	cin.get();
	return 0;
}

int max(int x, int y)            //定义max函数
{
	int z;
	if (x>y) z = x;
	else z = y;
	return(z);
}
