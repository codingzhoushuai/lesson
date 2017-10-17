#include <iostream>

using namespace std;

void f();
double g(int i, double d);  
double g(double i, int d);
double g(int i);     //可以移除

int main()
{
	//f();                                 //i=g(10)
	cout << g(1,1.23)<<endl;  
	cout << g(1.23, 1) << endl;            //i  (默认参数问题)
	cout << g(10) << endl;
                                         //int i=10;cout<<g(i)<<endl;等同于g（10） 
	cin.get();
	cin.get();
}

void f()
{
	cout << "hello function" << endl;
}

double g(int i, double d)               //double和int决定输出结果的数字类型
{
	//return i * 2;                     //形参
	return  i + d;
}

double g(double i, int d)               //double和int决定输出结果的数字类型
{
	return  i - d;
}

double g(int i)               //函数重载
{
	return  i*3;
}


//当函数同名时，编译器会根据变量的数量判断调用函数
//两个方法方法名相同，返回值类型不同，不能构成函数重载。原因如下：二义性