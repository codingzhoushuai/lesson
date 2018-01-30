#include <iostream>
#include <string>


using namespace std;


template<typename T1,typename T2>     //模板声明,其中T为类型参数 typename->class 容易造成误会为类类型
T1 my_max(T1 a, T1 b, T1 c)  //通用函数,T作虚拟的类型名
{
	if (b>a) a = b;
	if (c>a) a = c;
	return a;
}

int main()
{
	int i1 = 185, i2 = -76, i3 = 567, i;
	double d1 = 56.87, d2 = 90.23, d3 = -3214.78, d;
	long g1 = 67854, g2 = -912456, g3 = 673456, g;
	
	i = my_max <int,bool> (i1, i2, i3); //调用模板函数,此时T被int取代
	d = my_max <double,double> (d1, d2, d3); //调用模板函数,此时T被double取代
	g = my_max <long, double> (g1, g2, g3); //调用模板函数,此时T被long取代
	std::string s1 = "hello", s2 = "world", s3 = "abc", s4;  //s4 = my_max(s1, s2, s3);
	s4 = my_max <std::string,double>(s1, s2, s3);
	cout << s4 << endl;
	cout << "i_max =" << i << endl;
	cout << "d_max =" << d << endl;  
	cout << "g_max =" << g << endl;  
	return 0;

}
