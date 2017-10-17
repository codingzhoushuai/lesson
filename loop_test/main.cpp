#include <iostream>

using namespace std;

int main() 
{
	//for (int i = 0; i < 100 ; i++)
	//{	
	//	if (i == 5)
	//	{
	//		continue;   //当输出在下，有break的时候结果是0 1 2 3 4。当输出在上，结果0 1 2 3 4 5
	//		            //continue时，没有5
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
			
			return -1;   //当输出在下，有break的时候结果是0 1 2 3 4。当输出在上，结果0 1 2 3 4 5
			            //continue时，没有5

			
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