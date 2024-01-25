#include<iostream>
using namespace std;
main()
{    int f,i,t;
     cout << "enter the n:";
	 cin>> f; 
	 cout << "enter the x:";
	 cin>> i;
	 t=i;
	 f=f+(i/12 );
	 i= i+(i%12);
     i=i-t;
	 
	 cout<< " feet "<<f<<endl;
	 cout<< " inches "<<i;
}
	 
	 
