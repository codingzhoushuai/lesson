#include <iostream>

using namespace std;

int main() 
{
	//for (int i = 0; i < 100 ; i++)
	//{	
	//	if (i == 5)
	//	{
	//		continue;   //��������£���break��ʱ������0 1 2 3 4����������ϣ����0 1 2 3 4 5
	//		            //continueʱ��û��5
	//	}
	//	cout << i << ' ';
	//}
	//cout << endl;
	
	for (int i = 0; i < 100 ; i++)
	{	
		
		if (i == 5)
		{
			/*cout << "abc\t";
			cout << "abc\t";
			cout << "abc\t";
			cout << "abc\t";
			cout << "abc\t";*/
			
			return -1;   //��������£���break��ʱ������0 1 2 3 4����������ϣ����0 1 2 3 4 5
			            //continueʱ��û��5

			
		}
		
		cout << i << endl;
		cout << "xyz" << endl;
	}
	cout << endl;

	/*int i = 0;
	while (i < 100 )
	{
		cout << i << ' ';
		i++;
	}
	cout << endl;

	int m = 0;
	do 
	{
		cout << m << ' ';
		m++;
	} while (m < 100);
	cout << endl;*/

	cin.get();
	cin.get();
	system ("pause");
}