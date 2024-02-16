#include<iostream>
using namespace std;

class A
{
	int num;
	public:
	void  set( int num)
	{
		this->num=num; 
	}
	void get()
	{
		cout<< num<<endl;
	}
	
	A operator--(int )
	{
		A a1;
		a1.num=--num;
		return a1;	
	}
	
};
int main()
{
	A a1,a2;
	a1.set(5);
	a1.get();
	
	a2=a1--;
	a2.get();
	return 0;
}
