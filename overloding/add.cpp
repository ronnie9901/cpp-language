#include<iostream>
using namespace std;

class A
{
	int a,b;
	public:
		void set( )
		{
			cout<< " a :";
			cin>>a;
			cout<< " b :";
			cin>>b;
			
		}
		void get()
		{
			cout<<" a:"<< a <<endl;
			cout<<" b:"<< b <<endl;
		}
		 A operator+( A &a2)
		 {
		 	int x,y;
		 	A temp;
		 	x=this->a+a2.a;
		 	y=this->b+a2.b;
		 	
		 	temp.a=x;
		 	temp.b=y;
		 	
		 	return temp;
		 }
};
 int main()
 {
 	
 	A a1,a2,a3;
 	
 	a1.set();
 	a2.set();
 	a3= a1+a2;
 	
 	a3.get();
 	
 }
