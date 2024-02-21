#include<iostream>

using namespace std;

int main()
{
	int a,b;
	cout<<" enter a:";
	cin>>a;
	
	cout<<" entet b:";
	cin>>b;
	
	try
	{  if(b==0) 
	   {
	    	throw b;
	   }
	   else
	   {
	   	cout<<" divition :"<<a/b;
	   }
	}
	catch (...)
	{
		cout<<"0 cant divible to value  ";
		
	}
}
