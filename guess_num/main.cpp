#include <iostream>
#include <ctime>

using namespace std;
int main()
{
	srand(time(NULL));// srand((unsigned)time(0));
	//cout << rand() % 100 << endl;
	int i = rand() % 100;
	while (true)
	{
		cout << "请猜数字" << endl;
		int n;
		cin >> n;

		if (n == i)
		{
			cout << "Congratulations!" << endl;
			break;
		}
		if (n>i) 
		{
			cout << "大了" << endl;
		}
		else 
		{
			cout << "小了" << endl;
		}
	}
	

	cin.get();
	cin.get();
}