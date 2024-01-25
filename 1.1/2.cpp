#include<iostream>
//Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array.
using namespace std;
main()
{    int n,x,size,no=0,i;
     cout << "enter the n:";
	 cin>> n; 
	 cout << "enter the x:";
	 cin>> x;
	 
	 size=x-n;
	 size=size/4+1;
	 int a[size];
	 
	 for(i=n;i<x;i++)
	 {
	 	if(i%4==0)
	 	{
	 		a[no]=i;
	 		no++;
		}
	 } 
	
	 for(i=0;i<no;i++)
	 {
	     cout<<a[i] <<endl;
	 } 
	 
}
