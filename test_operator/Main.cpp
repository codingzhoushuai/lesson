#include <iostream>

using namespace std;

int main()
{
	cout << "请输入一个表达式" << endl;
	int a, b;
	char operate;
	cin >> a >> operate >> b;
	if (operate == '+') 
	{
		cout << a + b << endl;
	}
	if (operate == '-')
	{
		cout << a - b << endl;
	}if (operate == '*')
	{
		cout << a * b << endl;
	}if (operate == '/')
	{
		cout << a / b << endl;
	}
	cin.get();
	cin.get();
}

/*#include <iostream>
#include <string>
using namespace std;
int a, b;
char c;

int main()
{
	cin >> a >> c >> b;
	switch (c)
	{
	case '+':cout << a + b << endl; break;
	case '-':cout << a - b << endl; break;
	case '*':cout << a*b << endl; break;
	case '/':cout << a / b << endl; break;
	case '%':cout << a%b << endl; break;
	}
	return 0;


	cin.get();
}*/
