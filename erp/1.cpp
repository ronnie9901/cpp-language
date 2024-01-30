#include<iostream>
using namespace std;

class erp
{
	public:
	int a,hh,mm,ss;
	
	void input()
	{
		 cout<<" enter the a:";
		 cin>>a;
		 
		 mm=(a%3600)/60;
		 hh=a/3600;
		 a=mm*60;
		 
		 cout<<hh<<":"<<mm<<":"<<a;
	}

};
main()
{
	int i,n,a;
	class erp m[1];
    
     	m[1].input();
     	
	 

}