#include<iostream>  
using namespace std;  
 
template <class numtype>  
class Compare  
{  
public:  
    Compare(numtype a,numtype b);  
 
    numtype max();  
 
    numtype min();  

	numtype equal();
 
private:  
    numtype x,y;  
};  
 
template<class numtype>  
Compare<numtype>::Compare(numtype a,numtype b)  
{ x=a;y=b; }  
 
template<class numtype>  
numtype Compare<numtype>::max()  
{  
    return (x>y)? x:y;  
}  
 
template<class numtype>  
numtype Compare<numtype>::min()  
{  
    return (x<y)? x:y;  
}  

template<class numtype>
numtype Compare<numtype>::equal()
{
	return (x == y)?true:false;
}
int main()  
{  
    Compare<int>cmp1(3,7);  
    cout<<cmp1.max()<<"整数"<<endl;  
    cout<<cmp1.min()<<"整数"<<endl<<endl;  
    Compare<float>cmp2(45.78,93.6);  
    cout<<cmp2.max()<<"浮点"<<endl;  
    cout<<cmp2.min()<<"浮点"<<endl<<endl;  
    Compare<char>cmp3('a','A');  
    cout<<cmp3.max()<<"字符"<<endl;  
    cout<<cmp3.min()<<"字符"<<endl << endl;
	Compare<bool>cmp4('a', 'a');
	cout << cmp4.equal()<< endl;

	cin.get();
	cin.get();
}  