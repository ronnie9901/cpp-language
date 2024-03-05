#include<iostream>
using namespace std;

class  rohan
{
	int age;
	public:
	void read()
	{
	
		cout<<" enter age:";
		cin>>age;
		
		
		try
		{
		
	
			if(age<=18)
			{
				throw age ;
			}
			else if(age>=0)
			{
				cout<<" 0 is not age";
			}
		
		
			else if(age>=100)
			{
				cout<<" your not human";
			}
			else
			{
				cout<<"your eligible :";
			}
		}
		catch(int x)
		{
			cout<< x<<" you cant eligible ";
			
		}
	}
};
int main()
{
	rohan r1;
	r1.read();
}
