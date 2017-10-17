#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s1 = "hello,";      //string字符串类型   " "中包含的是字符串
	cout << s1 << endl;
	string s2 = "world";
	cout << s2 << endl;
	string s3 = s1 + s2;
	cout << s3 << endl;
	string s4 = s1 + s2 + "!";
	cout << s4 << 123 << endl;        //string的作用就是定义字符串

	string sa[10];
	for (int i = 0; i < 10; i++)
	{
		sa[i] = "hello";
		sa[6] = "world";
		cout << sa[i] << endl;
	}

	if (s1 > s2)
	{
		cout << "s1 > s2" << endl;
	}
	else if (s1 == s2)     //c++标准库规定string不允许在括号里用赋值
	{
		cout << "s1 = s2" << endl;
	}
	else
	{
		cout << "s1 < s2" << endl;
	}

	
	for(int j = 0; j != s2.length(); j++)
	{
		cout << s2[j] << " ";
	}

	cin.get();
	cin.get();
}