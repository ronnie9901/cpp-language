#include<iostream>
using namespace std;

class  A
{
	int a;
	public:
		void set(int a)
		{
		this->a=a;
		}
		void get()
		{
			cout<<a;
		}
		bool operator>(A &a2)
		{
			if(a>a2.a)
			{
				return true;
			}
			else
			{
				return false;
			}
		
		}
};

int main()
{
	A a1,a2;
	
	a1.set(40);
	a2.set(20);
	
	if(a1>a2)
	{
	cout<<" a1 is max ";
	}
	else
	{
		cout<<" a2 is max ";
	}

}

