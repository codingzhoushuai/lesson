#include<fstream>  
#include<iostream>
#include<fstream>  
#include <algorithm>   
using namespace std;


using namespace std;
int main()
{
	cout << "请输入10个数" << endl;
	//读入10个数
	const int m = 10;
	int a[m];
	ofstream out1("f1.dat", ios::out);
	ofstream out2("f2.dat", ios::out);
	if (!(out1 && out2)) {
		cout << "open error" << endl;
		exit(1);
	}
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
		if (i < 5) {
			out1 << a[m] << " ";
		}
		else {

			out2 << a[m] << " ";
		}
	}
	/*for (int i = 0; i<m; i++)
		cin >> a[i];

	//切割后输出f1和f2
	ofstream out1("f1.dat", ios::out);
	for (int i = 0; i<m / 2; i++)
		out1 << a[i] << " ";
	out1.close();

	ofstream out2("f2.dat", ios::out);
	for (int i = m / 2; i<m; i++)
		out2 << a[i] << " ";
	out2.close();*/

	//将f1内容传到f2
	int b[m];
	ifstream in("f1.dat", ios::in);
	for (int i = 0; i<m / 2; i++)
		in >> b[i];
	in.close();

	out2.open("f2.dat", ios::app);
	for (int i = 0; i<m / 2; i++)
		out2 << b[i] << " ";
	out2.close();

	//读入f2文件并排序
	ifstream infile("f2.dat", ios::in | ios::_Nocreate);
	if (!infile)
	{
		cerr << "open f2.dat error!" << endl;
		exit(1);
	}
	for (int i = 0; i < 10; i++) {
		in >> a[i];
	}
	sort(a, a + 10);
	reverse(a, a + 10);
	for (int i = 0; i < 10; i++) {

	}

	/*
	int c[10];
	int i, j, t;
	for (i = 0; i<10; i++)
	{
		infile >> c[i];
	}
	for (i = 0; i<9; i++)
		for (j = 0; j<9 - i; j++)
			if (c[j] < c[j + 1])
			{
				swap(c[j],c[j+1]);//t = c[j+1]; c[j + 1] = c[j ]; c[j] = t;
			}
	infile.close();
	
	ofstream outfile("f2.dat", ios::out);
	if (!outfile)
	{
		cerr << "open f2.dat error!" << endl;
		exit(1);
	}
	for (i = 0; i < 10; i++)
	{
		outfile << c[i] << " ";
	}
	outfile.close();*/

	//读取排序并写入后的f2.dat文件


	ifstream in_file("f2.dat");
	if (!infile)
	{
		exit(1);
	}
	cout << "降序排列后：" << endl;
	int d[10];
	for (int p = 0; p<10; p++)
	{
		cout << a[p] << " ";
		//cout << c[p] << " ";
	}
	infile.close();


	cin.get();
	cin.get();
}
