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
//	system("pause");   //cin.get();����Ҳ����
//		
//}

int main()
{
	int max(int x, int y);         //��max����������
	int a, b, c;
	cin >> a >> b;
	c = max(a, b);                   //����max����
	cout << "max=" << c << endl;
	cin.get();
	cin.get();
	return 0;
}

int max(int x, int y)            //����max����
{
	int z;
	if (x>y) z = x;
	else z = y;
	return(z);
}
