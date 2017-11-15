#include<iostream>
#include<string>

using namespace std;

class Student
{
private:
	int number;
	string name;
public:
	friend ostream& operator<<(ostream& os, Student& s);  //申明
	friend istream& operator>>(istream& is, Student& s);
	//friend void operator<<(ostream& os, Student& s);  //申明
	//friend void operator>>(istream& is, Student& s);
};

ostream & operator<<(ostream &output, Student& s)  //引用
{
	output << s.name << " " <<s.number << endl;
	return output;
}
istream & operator>>(istream &input, Student& s)  //引用
{
	input >> s.name >> s.number ;
	return input;
}

/*void operator<<(ostream &output, Student& s)
{
    output << s.name << " " <<s.number << endl;
}
void operator>>(istream &input, Student& s)  
{
    input >> s.name >> s.number ;
}*/


int main() 
{
	Student s1,s2;
	cin >> s1 >> s2;
	cout << s1 << s2 << endl;
    /*Student s1;
	cin >> s1;
	cout << s1;*/

	cin.get();
	cin.get();
}