#include <iostream>

using namespace std;

int main() 
{
	int i = 100;
	if (i > 100)
	{
		cout << "i>100" << endl;
	}
	else if (i == 100)
	{
		cout << "i=100" << endl;

	}
	else
		cout << "i<100" << endl;

	//switch case 

    int n = 500;
	switch(n)
	{
		case 500:
			cout << "n=500" << endl;
			break;  //刹车 break表示跳出后续处理，否则执行下个case语句。
		case 1000:
			cout << "n=1000" << endl;
			break;
		case 1500:
			cout << "n=1500" << endl;
			break;
		default:cout << "n值无效" << endl;
	} 


	cin.get();
	cin.get();
}