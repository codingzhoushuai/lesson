#include <iostream> 
using namespace std;
template <class T>   //定义类模板
class Compare
{
public:
	Compare(T a, T b)
	{
		x = a; y = b;
	}
	T max()
	{
		return (x>y) ? x : y;
	}
	T min()
	{
		return (x<y) ? x : y;
	}
    bool equal() {
		return (x == y) ? true : false;
	}
private:
	T x, y;
};
int main()
{
	Compare<int> cmp1(2, 9);      //定义对象cmp1，用于两个整数的比较
	cout << cmp1.max() << " is the Maximum of two integer numbers." << endl;
	cout << cmp1.min() << " is the Minimum of two integer numbers." << endl << endl;
	Compare<float> cmp2(45.78, 93.6);    //定义对象cmp2，用于两个浮点数的比较
	cout << cmp2.max() << " is the Maximum of two float numbers." << endl;
	cout << cmp2.min() << " is the Minimum of two float numbers." << endl << endl;
	Compare<char> cmp3('D', 'A');        //定义对象cmp3，用于两个字符的比较
	cout << cmp3.max() << " is the Maximum of two characters." << endl;
	cout << cmp3.min() << " is the Minimum of two characters." << endl;
	Compare<bool> cmp4(2,9);            
	cout << cmp4.equal() << endl;
	
	cin.get();
	cin.get();
}
