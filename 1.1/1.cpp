#include<iostream>
//Q.1 Write a Program to find all even elements from a given 1D array.
using namespace std;
main()
{    int n;
     cout << "enter the n:";
	 cin>> n; 
	 int a[n];
	 int i;
	 
	 for(i=0;i<n;i++)
	 {
	 	cout<< " a["<<i<<"]";
	 	cin>>a[i];
	 }
	  for(i=0;i<n;i++)
	 {
	      if(a[i]%2==0)
	      {
	      	  cout<<a[i];
		  }
	 }
	 
}

