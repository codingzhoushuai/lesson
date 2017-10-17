#include <iostream>
#include<string>

using namespace std;

struct animal
{
	string name;
	int age;
};

int main() 
{
	animal a;             //面向对象  分布在栈内存：内存会自动释放  堆内存：内存需要手动释放  
	a.name = "Tom";
	a.age  = 60;

	cout << a.name << " is " << a.age << " yearsold." << endl;

	animal* pa = new animal();
	pa->name = "Bill"; // (*pa).name = "Bill";
	pa->age = 18;   //(*pa).age = 18;

	cout << pa->name << " is " << pa->age << " yearsold." << endl;

	delete pa;
	/*从运行结果中我们可以看出，delete p1 在回收空间的过程中，只有 p1[0] 这个对象调用了析构函数，
	其它对象如 p1[1]、p1[2] 等都没有调用自身的析构函数，这就是问题的症结所在。如果用 delete[]，
	则在回收空间之前所有对象都会首先调用自己的析构函数。基本类型的对象没有析构函数，
    所以回收基本类型组成的数组空间用 delete 和 delete[] 都是应该可以的；但是对于类对象数组，
    只能用 delete[]。对于 new 的单个对象，只能用 delete 不能用 delete[] 回收空间。*/
	cin.get();
	cin.get();
	
}