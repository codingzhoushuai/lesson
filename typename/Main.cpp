#include <iostream>
#include <string>


using namespace std;


template<typename T1,typename T2>     //ģ������,����TΪ���Ͳ��� typename->class ����������Ϊ������
T1 my_max(T1 a, T1 b, T1 c)  //ͨ�ú���,T�������������
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
	
	i = my_max <int,bool> (i1, i2, i3); //����ģ�庯��,��ʱT��intȡ��
	d = my_max <double,double> (d1, d2, d3); //����ģ�庯��,��ʱT��doubleȡ��
	g = my_max <long, double> (g1, g2, g3); //����ģ�庯��,��ʱT��longȡ��
	std::string s1 = "hello", s2 = "world", s3 = "abc", s4;  //s4 = my_max(s1, s2, s3);
	s4 = my_max <std::string,double>(s1, s2, s3);
	cout << s4 << endl;
	cout << "i_max =" << i << endl;
	cout << "d_max =" << d << endl;  
	cout << "g_max =" << g << endl;  
	return 0;

}
