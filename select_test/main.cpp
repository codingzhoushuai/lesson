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
			break;  //ɲ�� break��ʾ����������������ִ���¸�case��䡣
		case 1000:
			cout << "n=1000" << endl;
			break;
		case 1500:
			cout << "n=1500" << endl;
			break;
		default:cout << "nֵ��Ч" << endl;
	} 


	cin.get();
	cin.get();
}