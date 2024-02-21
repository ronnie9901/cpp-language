#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<" enter age:";
	cin>>age;
	
	
	try{
		
		if(age<18)
		{
			throw age;
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
