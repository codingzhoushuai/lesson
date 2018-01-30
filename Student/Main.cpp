#include<iostream>

#include"hr.h"
#include"tea.h"

using namespace std;

using namespace student1;

int main()
{
	student1::Student stud1(300, "Àî", 20, "Dhanghai");
	stud1.show_data();
	student2::Student stud2(301, "ÃÏ", 'w', 91);
	stud2.show_data();
	
	cin.get();
}