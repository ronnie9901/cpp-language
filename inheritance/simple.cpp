//Questions:
//Q.1 Write a Program to find the sum of all three number�s cubes by implementing single-level inheritance: Class X->Class Y
//- Class X has the following members: a, b & c attributes in integer data type
//- Class Y has the following members: setData() and getData() methods
#include<iostream>
using namespace std;

class A
{  
    protected:
	int a, b ,c;
};

class B :public A
{   
    public:
	 void input()
	 {
	 	cout<< " enter a:";
	 	cin>>a;
	 	cout<< " enter b:";
	 	cin>>b;
	 	cout<< " enter c:";
	 	cin>>c;
	 }
	 void output()
	 {
	    cout<< " sum :" <<(a*a*a)+(b*b*b)+(c*c*c);
	
	 }
};

 int main()
{
  B a1;
  
  a1.input();
  a1.output();

 	
	
}


