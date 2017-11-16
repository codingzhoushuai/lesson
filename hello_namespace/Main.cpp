#include<iostream>
// #include<stdlib.h>  system("pause");  联合使用防止控制台闪退
// #include<windows.h> Sleep("5000");    联合使用防止控制台闪退
using namespace std;

namespace Computer
{
	int i;
	void f()
	{
		cout << "Computer ::f " << endl;
	}
}

namespace Information
{
	int i;
	void f()
	{
		cout << "Informationr ::f " << endl;
	}
}

/*using namespace Computer;*/
using Computer::i;
using Computer::f;  //using指令申明可以用短名字     和第38行对应，依旧可以使用长名字

//using namespace Information;   //两个using namespace Information;命名空间会冲突
int main() 
{
	auto i = 100;
	auto d = 3.14;
	auto s = "hello";
	cout << d << endl;
	cout << i*100 << endl;
    //auto k;  错误，没有赋值无法推导


	/*//Computer::i = 100;
	i = 100;
	cout << i << endl;
	//cout << Computer::i << endl;
	Information::i=200;
	
	f();
	Information::f();
	Computer::f();*/


	cin.get();
	cin.get();
}