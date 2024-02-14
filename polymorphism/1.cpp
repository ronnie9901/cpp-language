#include<iostream>
using namespace std;

class A  
{
	int a,b,c;
	public:
	void add( int a,int b)	
	{
		this->a=a;
		this->b=b;
		
		cout<< "global divide :"<<this->a / this->b <<endl <<" normal divide :"<< a/b <<endl;		
	}
	void add( int a,int b,int c)	
	{
		this->a=a;
		this->b=b;
		this->c=c;
		
		cout<< " global sub:"<<this->a - this->b - this->c<<endl <<"normal sub :" << a-b-c<< endl;		
	}
};
class B
{
	int a,b,c,d,e;
	
	public:
	void add( int a,int b,int c,int d)
	{
		this->a=a;
		this->b=b;
		this->c=c;
		this->d=d;
		cout<< "global multification :"<<this->a * this->b * this->c *this->d <<endl <<"normal multification :"<< a*b*c*d<< endl;
	}
	void add( int a,int b,int c,int d, int e)
	{
		this->a=a;
		this->b=b;
		this->c=c;
		this->d=d;
		this->e=e;
		cout<< "global addition :"<<this->a + this->b + this->c +this->d +this->e<<endl <<"normal additon:" << a+b+c+d+e <<endl;
	}
	
};
main()
{
	A a1;
	a1.add(2, 15);
	a1.add( 20 ,5,10);
	
	B b1;
	b1.add(1,2,3,4);
	b1.add(1,2,3,4,5);
	
}

