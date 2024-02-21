#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[50];
	int i;
	cout<<" enter ";
	cin>>a;
	
	int len=strlen(a);

	int check;

	for(i=0;i<len;i++)
	{
		 if(a[i]>65 && a[i]<97)
		 {
			check=1;
		 }
	}
	try
	{
		if(check==0)
		{
			throw a;
		}
		else
		{
			cout<<" its verify";
		}
	}	
	catch(...)
	{
		cout<<" its not verify";
	}
	

	
}
