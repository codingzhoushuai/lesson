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
		cout << "�������" << endl;
		int n;
		cin >> n;

		if (n == i)
		{
			cout << "Congratulations!" << endl;
			break;
		}
		if (n>i) 
		{
			cout << "����" << endl;
		}
		else 
		{
			cout << "С��" << endl;
		}
	}
	

	cin.get();
	cin.get();
}