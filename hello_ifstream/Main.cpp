#include<iostream>
#include<fstream>

using namespace std;

int main() 
{
	int a[10], max, i, order;
	ifstream infile("fl.dat",ios::in|ios::_Nocreate);

	if (!infile)
	{
		cerr << "open error!" << endl;
		exit(1);
	}
	for (int i = 0; i < 10; i++)
	{
		infile >> a[i];
		cout << a[i] << " ";
	}
	cout << endl;
	max = a[10];
	order = 0;
	for (i = 1; i < 10; i++)
		if (a[i] > max) 
		{
			max = a[i];
			order = i;
		}

	cout << "max = " << max << endl << "order = " << order << endl;
	infile.close();
	

	system("pause");

	}