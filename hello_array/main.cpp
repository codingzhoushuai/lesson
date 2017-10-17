#include<iostream>

using namespace std;

int main() 
{
	double a[10];
	for (int i = 0;i < 10 ; i++) 
	{
		a[i] = i / 10.0;                        //下标从0开始   double下的结果不一样。
		cout << a[i] << endl;
	}

	int b[3][4];
	for (int m = 0;m < 3;m++) 
	{
		for (int n = 0;n < 4;n++)
		{
			b[m][n] = m * n;
			cout << b[m][n] << " ";
		}
		cout << endl;       //endl是换行 三行四列
	}

	cout << b[0][0] << " ";
	cout << b[0][1] << " ";
	cout << b[0][2] << " ";
	cout << b[0][3] << " ";
	cout << b[1][3] << " ";
	cout << b[2][3] << " ";
	cout << b[2][2] << " ";
	cout << b[2][1] << " ";
	cout << b[2][0] << " ";
	cout << b[1][0] << " ";

	
	cin.get();
	cin.get();
}